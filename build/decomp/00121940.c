// OoT3D decomp @ 00121940  name=FUN_00121940  size=272

void FUN_00121940(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_00121a54;
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      if (DAT_00121a50 < *(int *)(param_1 + 0x54)) {
        *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0x92) + -0x8000;
        FUN_003641d0(*(undefined4 *)(param_1 + 0x128));
        FUN_003641d0(*(undefined4 *)(param_1 + 0x124));
        FUN_003641d0(param_1);
        FUN_00375bcc(param_1,DAT_00121a58);
      }
      else {
        FUN_00374444(param_2,param_1,param_1 + 0x28,0x90);
        FUN_00364084(param_1,param_2);
      }
    }
    else {
      FUN_00373d40(param_1 + 0x1a4,1);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
      uVar2 = DAT_00121a5c;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      *(undefined4 *)(param_1 + 100) = uVar1;
      *(undefined4 *)(param_1 + 0x7d8) = uVar2;
    }
  }
  iVar3 = FUN_003736fc(DAT_00121a64,DAT_00121a60,param_1 + 0x1a4);
  if (iVar3 != 0) {
    FUN_00375bcc(*(undefined4 *)(param_1 + 0x54),param_1,DAT_00121a68);
  }
  FUN_003705a0(uVar1,DAT_00121a6c,param_1 + 0x6c);
  return;
}
