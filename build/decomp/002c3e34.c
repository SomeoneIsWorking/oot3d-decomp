// OoT3D decomp @ 002c3e34  name=FUN_002c3e34  size=364

void FUN_002c3e34(int param_1,int param_2)

{
  undefined uVar1;
  undefined uVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined *puVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  undefined auStack_540 [1300];
  
  FUN_00350820(auStack_540,DAT_002c3fa0,0x34,0x19);
  if (*(short *)(param_1 + 0x24ba) < 0) {
    iVar3 = -(int)*(short *)(param_1 + 0x24ba);
    uVar5 = FUN_00324154(param_2 + 0x3410,param_1 + 0x254);
    fVar4 = DAT_002c3fa4;
    uVar1 = *(undefined *)(param_1 + 0x2d5);
    uVar2 = *(undefined *)(param_1 + 0x2c8);
    fVar10 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x24b9),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar10 = fVar10 * DAT_002c3fa4;
    uVar6 = FUN_002bdd54(param_1 + 0x254,iVar3);
    FUN_002bd9ec(fVar10,uVar5,*(undefined4 *)(param_1 + 0x27c),uVar6,uVar2,auStack_540,uVar1,
                 DAT_002c3fa8);
    *(char *)(param_1 + 0x24b9) = *(char *)(param_1 + 0x24b9) + '\x01';
    piVar7 = (int *)FUN_002bdd54(param_1 + 0x254,iVar3);
    iVar3 = DAT_002c3fa8;
    fVar10 = (float)VectorSignedToFloat(*(int *)(*piVar7 + *(int *)(*piVar7 + 0x14) + 0x10) + -1,
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x24b9),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (fVar10 <= fVar11 * fVar4) {
      *(undefined *)(param_1 + 0x24b9) = 0;
      *(undefined2 *)(param_1 + 0x24ba) = 0x5a;
    }
    iVar9 = 0;
    do {
      if (*(char *)(iVar3 + iVar9) != '\0') {
        puVar8 = auStack_540 + iVar9 * 0x34;
        FUN_00372224(*(int *)(param_1 + 0x2cc) + iVar9 * 0x34,puVar8);
        FUN_00372224(*(int *)(param_1 + 0x17dc) + iVar9 * 0x34,puVar8);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x19);
  }
  return;
}

