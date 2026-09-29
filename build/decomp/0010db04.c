// OoT3D decomp @ 0010db04  name=FUN_0010db04  size=108

void FUN_0010db04(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar3 == 5) && (iVar3 = FUN_00346964(param_2), iVar3 != 0)) {
    FUN_003725e0(param_2);
    uVar1 = DAT_0010db74;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
    uVar2 = DAT_0010db78;
    *(undefined4 *)(param_1 + 0xa4c) = DAT_0010db70;
    FUN_003724dc(uVar2,uVar1,param_1,param_2,0x3a);
    return;
  }
  return;
}
