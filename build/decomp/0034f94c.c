// OoT3D decomp @ 0034f94c  name=TorchAnimationModel_0034f94c  size=316

void TorchAnimationModel_0034f94c(int *param_1,int param_2,int param_3,int param_4)

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
  if (*(int *)(DAT_0034fa88 + param_2) != 0) {
    iVar1 = param_2 + 0x3a5c;
  }
  if (((*DAT_0034fa8c & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0034fa8c), iVar2 != 0)) {
    FUN_0036788c(DAT_0034fa90);
  }
  piVar4 = *(int **)(DAT_0034fa90 + 0x17c);
  piVar4[2] = *(int *)(param_3 + 0x178);
  iVar2 = ObjectBankArchive_00358ef8(iVar1 + 0x10,uVar5);
  param_1[1] = iVar2;
  iVar2 = (**(code **)(*piVar4 + 8))(piVar4,iVar2,1);
  *param_1 = iVar2;
  piVar4[2] = 0;
  FUN_0047d548(*param_1,2);
  iVar2 = (**(code **)(*(int *)*DAT_0034faa0 + 0xc))((int *)*DAT_0034faa0,0x98,DAT_0034fa9c,0x43);
  puVar3 = (undefined4 *)0x0;
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00352e80();
  }
  param_1[2] = (int)puVar3;
  *puVar3 = *(undefined4 *)(*param_1 + 0x10);
  uVar5 = FUN_00372f0c(iVar1 + 0x10,param_4);
  FUN_00372d94(param_1[2],uVar5);
  uVar5 = DAT_0034faa4;
  *(undefined1 *)(param_1[2] + 0x10) = 1;
  *(undefined4 *)(param_1[2] + 0xc) = uVar5;
  *(undefined1 *)(param_3 + 0x19a) = 1;
  return;
}
