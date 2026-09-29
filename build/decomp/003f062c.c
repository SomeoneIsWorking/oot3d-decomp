// OoT3D decomp @ 003f062c  name=FUN_003f062c  size=104

void FUN_003f062c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    iVar1 = FUN_00377a04();
    if (iVar1 == 0) {
      FUN_0036be34(param_2,DAT_003f069c);
      uVar2 = DAT_003f06a0;
    }
    else {
      FUN_0036be34(param_2,DAT_003f0694);
      uVar2 = DAT_003f0698;
    }
    *(undefined4 *)(param_1 + 0x7b8) = uVar2;
  }
  return;
}
