// OoT3D decomp @ 001a3c70  name=FUN_001a3c70  size=632

void FUN_001a3c70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  if ((*(ushort *)(param_1 + 0x1a8) & 0xf) == 0) {
    FUN_00375bcc(param_1,DAT_001a3ee8);
  }
  uVar2 = DAT_001a3f04;
  uVar7 = DAT_001a3ef0;
  iVar1 = DAT_001a3eec;
  if (*(short *)(*(int *)(DAT_001a3eec + 0x94) + 0x7da) < 2) {
    if (*(short *)(param_1 + 0x1d0) == 0) {
      *(undefined2 *)(param_1 + 0x1d0) = 0x1e;
      fVar9 = (float)FUN_003738a8(uVar7);
      *(float *)(param_1 + 0x508) = fVar9 + *(float *)(*(int *)(iVar1 + 0x94) + 0x28);
      fVar9 = (float)FUN_003738a8(DAT_001a3ef4);
      *(float *)(param_1 + 0x50c) = fVar9 + DAT_001a3ef8;
      fVar9 = (float)FUN_003738a8(uVar7);
      *(float *)(param_1 + 0x510) = fVar9 + *(float *)(*(int *)(iVar1 + 0x94) + 0x30);
    }
    *(undefined4 *)(param_1 + 0x520) = DAT_001a3efc;
    *(undefined4 *)(param_1 + 0x6c) = DAT_001a3f00;
    *(undefined2 *)(param_1 + 0x1d2) = 0xf;
  }
  else {
    if (*(short *)(param_1 + 0x1d2) == 0xe) {
      iVar4 = 0;
      iVar3 = 0;
      *(undefined4 *)(param_1 + 0x50c) = DAT_001a3f08;
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      do {
        iVar5 = iVar4 + 1;
        iVar6 = param_1 + iVar4 * 0xc;
        uVar7 = *(undefined4 *)(param_1 + 0x2c);
        uVar8 = *(undefined4 *)(param_1 + 0x30);
        iVar3 = iVar3 + 2;
        *(undefined4 *)(iVar6 + 0x240) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(iVar6 + 0x244) = uVar7;
        *(undefined4 *)(iVar6 + 0x248) = uVar8;
        iVar4 = iVar4 + 2;
        iVar5 = param_1 + iVar5 * 0xc;
        uVar7 = *(undefined4 *)(param_1 + 0x2c);
        uVar8 = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(iVar5 + 0x240) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(iVar5 + 0x244) = uVar7;
        *(undefined4 *)(iVar5 + 0x248) = uVar8;
      } while (iVar3 < 0x32);
    }
    if (*(short *)(param_1 + 0x1c) == 0x69) {
      iVar3 = *(int *)(iVar1 + 0x90);
      *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(iVar3 + 0x28);
      *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(iVar3 + 0x30);
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x8c);
      *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(iVar3 + 0x28);
      *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(iVar3 + 0x30);
    }
    uVar7 = DAT_001a3f10;
    FUN_00373500(DAT_001a3f14,DAT_001a3f10,DAT_001a3f0c,param_1 + 0x50c);
    if ((*(int *)(param_1 + 0x50c) == DAT_001a3f18) &&
       (FUN_00373500(uVar2,uVar7,DAT_001a3f1c,param_1 + 0x6c),
       *(short *)(*(int *)(iVar1 + 0x94) + 0x7da) == 3)) {
      FUN_00374428(param_1);
    }
  }
  fVar14 = *(float *)(param_1 + 0x508) - *(float *)(param_1 + 0x28);
  fVar10 = *(float *)(param_1 + 0x50c);
  fVar12 = *(float *)(param_1 + 0x2c);
  fVar13 = *(float *)(param_1 + 0x510) - *(float *)(param_1 + 0x30);
  fVar11 = (float)FUN_003696ec(fVar14,fVar13);
  fVar9 = DAT_001a3f20;
  fVar11 = fVar11 * DAT_001a3f20;
  fVar10 = (float)FUN_003696ec(fVar10 - fVar12,SQRT(fVar14 * fVar14 + fVar13 * fVar13));
  FUN_00370084(param_1 + 0x34,(int)(short)(int)(fVar10 * fVar9),5,
               (int)(short)(int)*(float *)(param_1 + 0x520));
  FUN_00370084(param_1 + 0x36,(int)(short)(int)fVar11,5,(int)(short)(int)*(float *)(param_1 + 0x520)
              );
  FUN_00365860(param_1);
  FUN_0036b96c(param_1);
  return;
}
