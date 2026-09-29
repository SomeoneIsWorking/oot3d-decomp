// OoT3D decomp @ 001d15d4  name=FUN_001d15d4  size=344

void FUN_001d15d4(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  FUN_00350b88(param_2,param_1 + 0xeec);
  FUN_0049fa58(param_1 + 0xee0,param_1 + 0x127c);
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == -1) {
    FUN_00350f34(param_1,param_1 + 0x1ad8,0);
    iVar2 = DAT_001d178c;
    iVar5 = *(int *)(DAT_001d178c + 0x2c);
    if (iVar5 != 0) {
      iVar4 = 0;
      do {
        iVar3 = iVar5 + iVar4 * 0xd4;
        if (*(char *)(iVar3 + 4) == '\x01') {
          if (*(char *)(iVar3 + 0xe) != '\0') {
            FUN_003685a0(iVar3 + 0x40);
          }
          if (*(int **)(iVar3 + 8) != (int *)0x0) {
            if (*(char *)(iVar3 + 5) == '\x7f') {
              FUN_0035021c();
            }
            else {
              (**(code **)(**(int **)(iVar3 + 8) + 4))();
            }
          }
          *(undefined1 *)(iVar3 + 4) = 0;
          *(undefined1 *)(iVar3 + 5) = 0xff;
          *(undefined4 *)(iVar3 + 8) = 0;
          *(undefined1 *)(iVar3 + 0xc) = 0;
          *(undefined1 *)(iVar3 + 0xd) = 0;
          *(undefined1 *)(iVar3 + 0xe) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x2d);
      FUN_0034fc6c(*(undefined4 *)(iVar2 + 0x2c));
      *(undefined4 *)(iVar2 + 0x2c) = 0;
    }
  }
  else {
    if (sVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00350be0(param_1 + 0x16b8);
    }
    if (sVar1 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00350be0(param_1 + 0x16b8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4);
}
