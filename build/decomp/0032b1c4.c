// OoT3D decomp @ 0032b1c4  name=FUN_0032b1c4  size=328

void FUN_0032b1c4(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;

  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x38) = uVar8;
  *(undefined4 *)(param_1 + 0x3c) = uVar9;
  uVar3 = param_2[8];
  *(undefined4 *)(param_1 + 0x40) = param_2[7];
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = 1;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_002d6e20(1,param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  piVar2 = (int *)FUN_002deb7c(1,param_1 + 0x48);
  if (param_4 != 0) {
    piVar2 = *(int **)(param_1 + 0x50);
  }
  uVar6 = 0;
  if (param_4 != 0 && piVar2 != (int *)0x0) {
    uVar6 = (**(code **)(*piVar2 + 0x10))(piVar2,DAT_0032b30c,*param_2);
  }
  uVar1 = DAT_0032b310;
  FUN_002fb074(DAT_0032b310,*(undefined4 *)(param_1 + 0x48));
  if (*(char *)((int)param_2 + 6) == '\0') {
    FUN_002de990(uVar6 | 0xde1,-(int)*(short *)(param_2 + 1),*(undefined2 *)(param_2 + 3),
                 (int)*(short *)(param_2 + 2),(int)*(short *)((int)param_2 + 10),0,
                 *(undefined2 *)(param_2 + 3),*(undefined2 *)((int)param_2 + 0xe),param_3);
  }
  else {
    FUN_002d2ba8(uVar6 | uVar1,-(int)*(short *)(param_2 + 1),*(undefined2 *)(param_2 + 3),
                 (int)*(short *)(param_2 + 2),(int)*(short *)((int)param_2 + 10),0,*param_2,param_3)
    ;
  }
  FUN_002de76c(uVar1,DAT_0032b314,param_1 + 0x4c);
  FUN_0030e604(100000,0);
  return;
}
