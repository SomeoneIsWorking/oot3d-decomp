// OoT3D decomp @ 0038a59c  name=FUN_0038a59c  size=192

void FUN_0038a59c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == *(short *)(param_1 + 0x852)) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    iVar1 = FUN_00369f3c(param_2);
    if (iVar1 == 0) {
      FUN_003725e0(param_2);
      *(undefined4 *)(param_1 + 0x124) = 0;
      FUN_003724dc(DAT_0038a668,DAT_0038a664,param_1,param_2,0x1d);
      uVar2 = DAT_0038a66c;
    }
    else {
      if (iVar1 != 1) {
        return;
      }
      *(undefined2 *)(param_1 + 0x116) = *(undefined2 *)(DAT_0038a65c + 6);
      *(short *)(param_1 + 0x85e) = *(short *)(param_1 + 0x86a) + 0x15;
      FUN_0036be34(param_2,*(undefined2 *)(param_1 + 0x116));
      *(undefined2 *)(param_1 + 0x852) = 5;
      uVar2 = DAT_0038a660;
    }
    *(undefined4 *)(param_1 + 0x840) = uVar2;
  }
  return;
}
