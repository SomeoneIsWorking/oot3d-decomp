// OoT3D decomp @ 0041b29c  name=FUN_0041b29c  size=432

int FUN_0041b29c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 *local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 *puStack_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 **local_2c;
  uint local_28;
  int local_24;

  local_2c = &local_2c;
  local_24 = 0;
  local_28 = 1;
  local_50 = &local_3c;
  local_3c = 0;
  local_38 = 0;
  local_30 = 1;
  local_34 = 0;
  local_48 = 2;
  local_40 = 0xc;
  local_4c = *(undefined4 *)(DAT_0041b44c + 0xc);
  puStack_44 = local_50;
  iVar2 = FUN_002fe970(&local_4c,&local_24,0,3,1,local_2c,1,2,local_50,0xc,1,0);
  if (iVar2 < 0) {
    FUN_003351b4();
  }
  iVar2 = local_24;
  piVar3 = (int *)FUN_0030e6a8(DAT_0041b450);
  uVar1 = DAT_0041b458;
  if (piVar3 == (int *)0x0) {
    software_interrupt(0x23);
    FUN_003351b4(DAT_0041b458);
  }
  else {
    *piVar3 = DAT_0041b454;
    piVar3[1] = iVar2;
    uVar1 = DAT_0041b458;
  }
  iVar2 = 0;
  if (param_3 != 0) {
    uVar4 = (**(code **)*piVar3)(piVar3,&local_28,0,0,&local_50,0x28);
    uVar4 = uVar4 & 0x80000000;
    bVar7 = uVar4 == 0;
    uVar5 = uVar4;
    if (uVar4 == 0) {
      uVar5 = local_28;
    }
    iVar6 = -1;
    if (uVar4 == 0) {
      bVar7 = uVar5 == 0x28;
    }
    if (bVar7) {
      iVar2 = local_48 + local_40 + local_38 + local_30;
    }
    else {
      iVar2 = -1;
    }
    if (iVar2 < 0) goto LAB_0041b414;
  }
  iVar6 = param_1 * 0x10 + param_2 * 0x14 + iVar2;
LAB_0041b414:
  if (iVar6 < 1) {
    software_interrupt(0x23);
    FUN_003351b4(uVar1);
  }
  (**(code **)(*piVar3 + 0x20))(piVar3);
  return iVar6;
}
