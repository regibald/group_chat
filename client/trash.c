
  /* Armare il signale -- POTREBBE ESSERE DEPRECATA

  struct sigaction usr_action;
  sigset_t block_mask;

  sigfillset (&block_mask);
  usr_action.sa_handler = tactical_change;
  usr_action.sa_mask = block_mask;
  usr_action.sa_flags = 0;
  ret = sigaction (SIGUSR1, &usr_action, NULL);
  ERROR_HELPER(ret,"Errore armamento segnale SIGUSR1: ");
  */

    /*gestore del segnale SIGUSR1 POTREBBE ESSERE DEPRECATA
    void tactical_change() {
      if(parent_status)
        parent_status = 0;
      else
        parent_status = 1;
    }
    */

/*
    int end_end_chat(int id_shared_memory){
      int ret;
      char* c;
      char* cour;
      char end_addr[MAX_IP_LEN];
      char end_name[MAX_LEN_NAME];
      char end_port[MAX_PORT_LEN];
      int socket;
      c = shmat(id_shared_memory, 0 , SHM_R);
      if ( c == (char*) -1 )
        ERROR_HELPER(-1,"Errore lettura memoria condivisa: ");
      //printf("Contenuto shared memory:\n");
      //printf("%s\n",c);
      cour = strtok(c,"\n");
      strcpy(end_addr,c);
      cour = strtok(NULL,"\n");
      strcpy(end_port,cour);
      cour = strtok(NULL,"\n");
      strcpy(end_name,cour);


      printf("Provo a connermi a %s all'indirizzo %s:%s\n",end_name,end_addr,end_port);

      socket = connect_to(end_addr,atoi(end_name));
      ERROR_HELPER(socket,"Errore connessione verso utente :");
      ret = shmdt(c);
      ERROR_HELPER(ret,"Errore scollegamento END2END: ");

      return socket;
    }*/


      /*kill(getppid(),SIGINT);
      ret = shmctl(id_shared_memory,IPC_RMID,NULL);
      ERROR_HELPER(ret,"Errore cancellazione memoria condivisa: ");*/
