// OoT3D decomp @ 00325354  name=FUN_00325354  size=220

void FUN_00325354(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  iVar4 = 0;
  do {
    iVar3 = *(int *)(param_2 + iVar4 * 8 + 0x10);
joined_r0x0032537c:
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + 3);
      if (-1 < cVar1) {
        cVar2 = *(char *)(param_1 + 0x4c30);
        bVar5 = cVar1 != cVar2;
        if (bVar5) {
          cVar2 = *(char *)(param_1 + 0x500c);
        }
        if (bVar5 && cVar1 != cVar2) {
          if (*(char *)(iVar3 + 0x121) == '\0') {
            iVar3 = FUN_002da114(param_2,iVar3,param_1);
          }
          else {
            *(undefined4 *)(iVar3 + 0x140) = 0;
            *(undefined4 *)(iVar3 + 0x13c) = 0;
            *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffffe;
            FUN_002d644c(iVar3,param_1);
            iVar3 = *(int *)(iVar3 + 0x130);
          }
          goto joined_r0x0032537c;
        }
      }
      iVar3 = *(int *)(iVar3 + 0x130);
      goto joined_r0x0032537c;
    }
    iVar4 = iVar4 + 1;
    if (0xb < iVar4) {
      FUN_002d8408(param_1,param_1 + 0x5c78);
      *(undefined4 *)(param_2 + 0x1b4) = 0;
      *(uint *)(param_2 + 0x1a0) = *(uint *)(param_2 + 0x1a0) & 0xffffff;
      return;
    }
  } while( true );
}
