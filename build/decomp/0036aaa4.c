// OoT3D decomp @ 0036aaa4  name=FUN_0036aaa4  size=208

void FUN_0036aaa4(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;

  if (((param_3 & 0xff) < 0x13) &&
     (param_2 = param_2 + (param_3 & 0xff) * 0x80, *(int *)(DAT_0036ab74 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  if (((*DAT_0036ab78 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_0036ab78), iVar1 != 0)) {
    FUN_0036788c(DAT_0036ab7c);
  }
  piVar3 = *(int **)(DAT_0036ab7c + 0x17c);
  piVar3[2] = *(int *)(param_1 + 0x178);
  uVar2 = ObjectBankArchive_00358ef8(param_2 + 0x10,param_4);
  (**(code **)(*piVar3 + 8))(piVar3,uVar2,1);
  piVar3[2] = 0;
  *(int *)(DAT_0036ab88 + 0xc) = *(int *)(DAT_0036ab88 + 0xc) + 1;
  return;
}
