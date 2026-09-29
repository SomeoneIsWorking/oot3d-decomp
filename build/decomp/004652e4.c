// OoT3D decomp @ 004652e4  name=FUN_004652e4  size=100

void FUN_004652e4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_10;

  local_10 = param_4;
  FUN_0030ee14(&local_10,param_1);
  iVar1 = DAT_00465348;
  iVar2 = *param_1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x9c);
  }
  if (iVar2 == 0) {
    iVar3 = -1;
  }
  if ((iVar3 == *(int *)(DAT_00465348 + 0x28)) &&
     ((local_10 == 0 || (uVar4 = FUN_00481560(), uVar4 < 0xd)))) {
    *(undefined1 *)(iVar1 + 4) = 0;
  }
  FUN_0030ede0(&local_10);
  return;
}
