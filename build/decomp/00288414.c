// OoT3D decomp @ 00288414  name=FUN_00288414  size=208

void FUN_00288414(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == *(short *)(param_1 + 0x852)) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    iVar1 = FUN_00369f3c(param_2);
    if (iVar1 == 0) {
      FUN_003725e0(param_2);
      *(undefined4 *)(param_1 + 0x124) = 0;
      FUN_003724dc(DAT_002884f0,DAT_002884ec,param_1,param_2,0xe);
      uVar2 = DAT_002884f4;
    }
    else {
      if (iVar1 != 1) {
        return;
      }
      FUN_003725e0(param_2);
      *(undefined1 *)(param_1 + 0x867) = 1;
      *(undefined2 *)(param_1 + 0x116) = *(undefined2 *)(DAT_002884e4 + 0x10);
      *(short *)(param_1 + 0x85e) = *(short *)(param_1 + 0x86a) + 0x15;
      FUN_0036be34(param_2,*(undefined2 *)(param_1 + 0x116));
      *(undefined2 *)(param_1 + 0x852) = 5;
      uVar2 = DAT_002884e8;
    }
    *(undefined4 *)(param_1 + 0x840) = uVar2;
  }
  return;
}
