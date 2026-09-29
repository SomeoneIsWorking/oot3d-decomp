// OoT3D decomp @ 00350508  name=TorchAnimationModel_00350508  size=312

void TorchAnimationModel_00350508(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;

  uVar5 = 0x29;
  if (param_4 == 0xe) {
    uVar5 = 0x2a;
  }
  iVar1 = 0;
  if (*(int *)(DAT_00350640 + param_2) != 0) {
    iVar1 = param_2 + 0x3a5c;
  }
  if (((*DAT_00350644 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00350644), iVar2 != 0)) {
    FUN_0036788c(DAT_00350648);
  }
  piVar4 = *(int **)(DAT_00350648 + 0x17c);
  piVar4[2] = param_3;
  iVar2 = ObjectBankArchive_00358ef8(iVar1 + 0x10,uVar5);
  param_1[1] = iVar2;
  iVar2 = (**(code **)(*piVar4 + 8))(piVar4,iVar2,param_3 != 0);
  *param_1 = iVar2;
  piVar4[2] = 0;
  FUN_0047d548(*param_1,2);
  iVar2 = (**(code **)(*(int *)*DAT_00350658 + 0xc))((int *)*DAT_00350658,0x98,DAT_00350654,0x71);
  puVar3 = (undefined4 *)0x0;
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00352e80();
  }
  param_1[2] = (int)puVar3;
  *puVar3 = *(undefined4 *)(*param_1 + 0x10);
  uVar5 = FUN_00372f0c(iVar1 + 0x10,param_4);
  FUN_00372d94(param_1[2],uVar5);
  *(undefined4 *)(param_1[2] + 0xc) = DAT_0035065c;
  *(undefined1 *)(param_1[2] + 0x10) = 1;
  return;
}
