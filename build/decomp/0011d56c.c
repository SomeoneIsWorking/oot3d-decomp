// OoT3D decomp @ 0011d56c  name=FUN_0011d56c  size=328

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011d56c(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined2 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),2,DAT_0011d6b4);
  iVar4 = FUN_003731e0(param_1 + 0x208);
  uVar1 = DAT_0011d6b8;
  if (iVar4 != 0) {
    FUN_00370350(DAT_00258b9c,param_1 + 0x208,*(undefined4 *)(DAT_00258ba0 + 0x1c));
    if (*(int *)(param_1 + 0x1a4) == DAT_00258ba4) {
      uVar5 = (undefined2)DAT_00258ba8;
    }
    else {
      uVar5 = 2;
    }
    *(undefined2 *)(param_1 + 0x1aa) = uVar5;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00258bac;
    return;
  }
  iVar4 = FUN_003736fc(DAT_0011d6bc,DAT_0011d6b8,param_1 + 0x208);
  fVar2 = DAT_0011d6c0;
  if (iVar4 == 0) {
    if ((1 < *(short *)(param_1 + 0x1aa)) &&
       (iVar4 = FUN_003736fc(DAT_0011d6c0,uVar1,param_1 + 0x208), iVar4 != 0)) {
      FUN_00374a58(DAT_0011d6d0,param_1 + 0x208,*DAT_0011d6d4);
      if (*(short *)(param_1 + 0x1aa) != 0) {
        *(short *)(param_1 + 0x1aa) = *(short *)(param_1 + 0x1aa) + -1;
      }
    }
  }
  else {
    fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar3 = DAT_0011d6c4;
    fVar9 = *(float *)(param_1 + 0x28);
    fVar6 = fVar6 * DAT_0011d6c4;
    fVar7 = *(float *)(param_1 + 0x2c);
    fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    iVar4 = z_actor_003738d0(fVar9 + fVar6,fVar7 + fVar2,*(float *)(param_1 + 0x30) + fVar8 * fVar3,
                             param_2 + 0x208c,param_2,DAT_0011d6c8,(int)*(short *)(param_1 + 0xbc));
    if (iVar4 != 0) {
      FUN_00375bcc(param_1,DAT_0011d6cc);
      return;
    }
  }
  return;
}
