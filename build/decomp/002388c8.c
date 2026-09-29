// OoT3D decomp @ 002388c8  name=FUN_002388c8  size=268

void FUN_002388c8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;

  uVar1 = FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x240),0x400);
  uVar2 = FUN_00370378(param_1 + 0xbc,0x1000,0x400);
  uVar3 = FUN_00370378(param_1 + 0xc0,0,0x800);
  uVar4 = FUN_00370378(param_1 + 0x23c,0,0x400);
  uVar5 = FUN_003705a0(*(float *)(*(int *)(param_1 + 0x128) + 0xee4) + DAT_002389d4,DAT_002389d8,
                       param_1 + 0x2c);
  uVar6 = FUN_003705a0(DAT_002389e0,DAT_002389dc,param_1 + 0xedc);
  fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x240));
  *(float *)(param_1 + 0x28) =
       *(float *)(*(int *)(param_1 + 0x128) + 0xee0) - *(float *)(param_1 + 0xedc) * fVar8;
  fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x240));
  *(float *)(param_1 + 0x30) =
       *(float *)(*(int *)(param_1 + 0x128) + 0xee8) - *(float *)(param_1 + 0xedc) * fVar8;
  iVar7 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar7 != 0 && (uVar6 & uVar1 & uVar2 & uVar3 & uVar4 & uVar5) != 0) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_002389e4;
    *(undefined2 *)(param_1 + 0x234) = 0xe;
    *(undefined4 *)(param_1 + 0x22c) = DAT_002389e8;
  }
  return;
}
