Vim�UnDo� S^k~�\�A9�]���V��s�II���oݸ   )              %         B       B   B   B    Y�$�    _�                            ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �         %      4    shm_fd = shm_open(name, O_CREAT | O_RDWR, 0666);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �         %      ,    shm_fd = shm_open(name, | O_RDWR, 0666);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             Y�#�    �         %      +    shm_fd = shm_open(name,  O_RDWR, 0666);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �                    ftruncate(shm_fd , SIZE);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �         $      >    ptr = mmap(0 , SIZE , PROT_WRITE, MAP_SHARED, shm_fd , 0);5�_�                       #    ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �         %          �         $    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �         %          if5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �         %          if(shm_fd == 0)5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �         %          if(shm_fd == 0)5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �         %          if(shm_fd == 0)5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �         '          }5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �         '          5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �                    if(shm_fd == 0){5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �                        5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             Y�#�     �                    }5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             Y�$     �         $      "    sprintf(ptr, "%s", message_0);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       Y�$     �         $      !    printf(ptr, "%s", message_0);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       Y�$     �         $          printf("%s", message_0);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       Y�$"     �         $          printf("%s",);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       Y�$'     �         $          printf("%s",(char*));5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       Y�$)    �         $          printf("%s",(char*));5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       Y�$�     �         %          �         $    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       Y�$�     �         %          if5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       Y�$�     �         %          if(shm_fd == -1)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       Y�$�     �         %          if(shm_fd == -1)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       Y�$�     �         %          if(shm_fd == -1){}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       Y�$�     �         %          if(shm_fd == -1){}5�_�                           ����                                                                                                                                                                                                                                                                                                                            !          !                 Y�$�     �         '          5�_�                           ����                                                                                                                                                                                                                                                                                                                            !          !                 Y�$�     �         '              printf5�_�                           ����                                                                                                                                                                                                                                                                                                                            !          !                 Y�$�     �         '              printf()5�_�                            ����                                                                                                                                                                                                                                                                                                                            !          !                 Y�$�     �         '              printf("")5�_�      !                      ����                                                                                                                                                                                                                                                                                                                            !          !                 Y�$�     �         '              printf("")5�_�       "           !      $    ����                                                                                                                                                                                                                                                                                                                            !          !                 Y�$�     �         '      &        printf("shared memory failed")5�_�   !   #           "      (    ����                                                                                                                                                                                                                                                                                                                            !          !                 Y�$�     �         '      (        printf("shared memory failed\n")5�_�   "   $           #      (    ����                                                                                                                                                                                                                                                                                                                            !          !                 Y�$�     �         (              �         '    5�_�   #   %           $          ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �         (              exit5�_�   $   &           %          ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �         (              exit(-1)5�_�   %   '           &          ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�    �         (              exit(-1)5�_�   &   (           '   #       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   "   #              ptr += strlen(message_0);5�_�   '   )           (   #       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   "   #          "    sprintf(ptr, "%s", message_1);5�_�   (   *           )   #       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   "   #              ptr += strlen(message_1);5�_�   )   +           *   "       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   !   #   %          printf("%s",(char*)ptr);5�_�   *   ,           +   "       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   "   $   &          �   "   $   %    5�_�   +   -           ,   #       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   "   $   &          if5�_�   ,   .           -   #       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   "   $   &          if(shm_unlink)5�_�   -   /           .   #       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   "   $   &          if(shm_unlink())5�_�   .   0           /   #       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   "   $   &          if(shm_unlink())5�_�   /   1           0   #       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   "   $   &          if(shm_unlink())5�_�   0   2           1   #       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   "   $   &          if(shm_unlink(name))5�_�   1   3           2   #       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   "   $   &          if(shm_unlink(name) == -1)5�_�   2   4           3   #       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   "   $   &           if(shm_unlink(name) == -1){}5�_�   3   5           4   #       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   "   &   &           if(shm_unlink(name) == -1){}5�_�   4   6           5   $       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   #   %   (          5�_�   5   7           6   $       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   #   %   (              printf5�_�   6   8           7   $       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   #   %   (              printf()5�_�   7   9           8   $       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   #   %   (              printf()5�_�   8   :           9   $       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   #   %   (              printf("")5�_�   9   ;           :   $   !    ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   #   %   (      #        printf("Error removing %s")5�_�   :   <           ;   $   $    ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   #   %   (      %        printf("Error removing %s\n")5�_�   ;   =           <   $   *    ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   #   %   (      *        printf("Error removing %s\n",name)5�_�   <   >           =   $   *    ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   $   &   )              �   $   &   (    5�_�   =   ?           >   %       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   $   &   )              exit5�_�   >   @           ?   %       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   $   &   )              exit()5�_�   ?   A           @   %       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   $   &   )              exit()5�_�   @   B           A   %       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�     �   $   &   )              exit(1)5�_�   A               B   %       ����                                                                                                                                                                                                                                                                                                                            "          "                 Y�$�    �   $   &   )              exit(-1)5��