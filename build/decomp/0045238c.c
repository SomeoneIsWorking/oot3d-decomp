// OoT3D decomp @ 0045238c  name=FUN_0045238c  size=524

void FUN_0045238c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(int *)(DAT_00452438 + 4) = param_1 + 0x14;
  if (*(short *)(param_1 + 0x43dc) != 0) {
    if (*(short *)(param_1 + 0x43de) == 0) {
      iVar2 = 0;
      if (*(short *)(param_1 + 0x43dc) != 0) {
        do {
          iVar1 = param_1 + 0x3a58 + iVar2 * 0x70;
          uVar3 = *(undefined4 *)(iVar1 + 0x9a0);
          FUN_002f70c4(iVar1 + 0x988);
          FUN_0034fc6c(uVar3);
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x43dc));
      }
      *(undefined2 *)(param_1 + 0x43dc) = 0;
    }
    else {
      *(short *)(param_1 + 0x43de) = *(short *)(param_1 + 0x43de) + -1;
    }
  }
  FUN_002e4514(param_1);
  FUN_002e2e60(param_1);
  FUN_002e25f0(param_1);
  return;
}

