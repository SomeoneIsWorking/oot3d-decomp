// OoT3D decomp @ 0030f128  name=FUN_0030f128  size=552

void FUN_0030f128(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;

  *param_1 = 1;
  puVar1 = DAT_0030f38c;
  param_1[1] = (char)param_4;
  if (((*puVar1 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0030f38c), iVar2 != 0)) {
    FUN_0036788c(DAT_0030f390);
  }
  piVar4 = *(int **)(DAT_0030f390 + 0x17c);
  piVar4[2] = param_2;
  uVar3 = ObjectBankArchive_00358ef8(param_3,param_4);
  uVar3 = (**(code **)(*piVar4 + 8))(piVar4,uVar3,1);
  *(undefined4 *)(param_1 + 4) = uVar3;
  piVar4[2] = 0;
  iVar2 = 0;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  switch(param_4) {
  case 4:
    iVar2 = FUN_00372f0c(param_3,5);
    break;
  case 5:
    iVar2 = FUN_00372f0c(param_3,7);
    break;
  case 6:
    iVar2 = FUN_00372f0c(param_3,8);
    break;
  case 8:
    iVar2 = FUN_00372f0c(param_3,10);
    break;
  case 9:
    iVar2 = FUN_00372f0c(param_3,0xb);
    break;
  case 10:
    iVar2 = FUN_00372f0c(param_3,0xc);
    break;
  case 0xb:
    iVar2 = FUN_00372f0c(param_3,0xd);
    break;
  case 0xc:
    iVar2 = FUN_00372f0c(param_3,0xe);
    break;
  case 0xe:
    iVar2 = FUN_00372f0c(param_3,0x11);
    break;
  case 0x10:
    iVar2 = FUN_00372f0c(param_3,0x12);
    break;
  case 0x11:
    iVar2 = FUN_00372f0c(param_3,0x13);
    break;
  case 0x12:
    if (param_5 == 8) {
      iVar2 = FUN_00372f0c(param_3,0x14);
    }
    else {
      if (param_5 != 9) {
        return;
      }
      iVar2 = FUN_00372f0c(param_3,0x15);
    }
  }
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    FUN_00372d94(param_1 + 0x40,iVar2);
    param_1[0x50] = 1;
    param_1[0xe] = 1;
  }
  return;
}
