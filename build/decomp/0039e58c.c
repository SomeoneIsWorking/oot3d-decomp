// OoT3D decomp @ 0039e58c  name=FUN_0039e58c  size=480

void FUN_0039e58c(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];

  FUN_00372224(auStack_50,param_1 + 0x148);
  FUN_00372224(auStack_80,param_1 + 0x148);
  uVar2 = DAT_0039e778;
  fVar7 = DAT_0039e774;
  piVar1 = DAT_0039e76c;
  if (*(int *)(param_1 + 0x1c8) != 0) {
    local_98 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0039e76c + 0x147c),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_98 = local_98 + DAT_0039e770;
    local_94 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0039e76c + 0x147e),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_94 = local_94 + DAT_0039e774;
    local_90 = DAT_0039e778;
    FUN_003735ac(auStack_8c,auStack_80,&local_98);
    fVar3 = DAT_0039e77c;
    iVar5 = *piVar1;
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1474),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_0037378c(fVar6 + DAT_0039e77c,param_2,auStack_8c,*(short *)(iVar5 + 0x1476) + 10,
                 (int)(short)(*(short *)(iVar5 + 0x1478) + 1000),(int)*(short *)(iVar5 + 0x147a),0);
    FUN_003192f0(param_2,auStack_8c,3);
    local_98 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x147c),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_98 = DAT_0039e780 - local_98;
    local_94 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x147e),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_94 = local_94 + fVar7;
    local_90 = uVar2;
    FUN_003735ac(auStack_8c,auStack_80,&local_98);
    iVar5 = *piVar1;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1474),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_0037378c(fVar7 + fVar3,param_2,auStack_8c,*(short *)(iVar5 + 0x1476) + 10,
                 (int)(short)(*(short *)(iVar5 + 0x1478) + 1000),(int)*(short *)(iVar5 + 0x147a),0);
    FUN_003192f0(param_2,auStack_8c,3);
    uVar4 = DAT_0039e788;
    uVar2 = DAT_0039e784;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    FUN_0037547c(DAT_0039e78c,param_1 + 0x28,4,uVar4,uVar4,uVar2);
  }
  if (*(int *)(param_1 + 0x1cc) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1cc) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1cc),auStack_50);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1cc),0);
  }
  return;
}
