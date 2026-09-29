// OoT3D decomp @ 00121a70  name=FUN_00121a70  size=272

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00121a70(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = DAT_00121b84;
  FUN_003705a0(DAT_00121b84,DAT_00121b80,param_1 + 0x6c);
  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      *(undefined2 *)(param_1 + 0x8fa) = 0;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
      *(undefined1 *)(param_1 + 0x123) = 0xff;
      if (0x1d < *(short *)(param_1 + 0x8fe)) {
        *(undefined2 *)(param_1 + 0x8fe) = 0x1d;
      }
      *(undefined4 *)(param_1 + 0x8f4) = DAT_00121b88;
    }
    else {
      if (*(short *)(param_1 + 0x1c) != 1) {
        iVar3 = *(int *)(DAT_001cd098 + param_2);
        FUN_0036e734(param_1 + 0x1a4,2);
        *(byte *)(param_1 + 0x949) = *(byte *)(param_1 + 0x949) | 1;
        *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_1 + 0x98);
        FUN_0036df4c(param_1 + 8,iVar3 + 0x28);
        iVar3 = DAT_001cd09c;
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
        if (*(int *)(param_1 + 0x8f4) != iVar3) {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
          *(undefined2 *)(param_1 + 0x8fa) = 900;
          *(undefined1 *)(param_1 + 0x8f8) = 0x30;
        }
        *(undefined4 *)(param_1 + 0x8f4) = DAT_001cd0a0;
        return;
      }
      FUN_00370350(DAT_00121b8c,param_1 + 0x1a4,5);
      iVar2 = DAT_00121b98;
      uVar1 = DAT_00121b90;
      *(byte *)(param_1 + 0x949) = *(byte *)(param_1 + 0x949) | 1;
      iVar3 = DAT_00121b94;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      *(int *)(param_1 + 0x8f4) = iVar3;
      if (iVar3 != iVar2) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + -0x8000;
        *(short *)(param_1 + 0x8fa) = (short)DAT_00121b9c;
        *(undefined1 *)(param_1 + 0x8f8) = 0x30;
        return;
      }
    }
  }
  return;
}
