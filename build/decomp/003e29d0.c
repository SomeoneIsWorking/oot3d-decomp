// OoT3D decomp @ 003e29d0  name=FUN_003e29d0  size=396

void FUN_003e29d0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  iVar4 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar4 != 0) {
    FUN_00370410(param_1);
  }
  uVar2 = DAT_003e2b60;
  fVar1 = DAT_003e2b5c;
  if (((DAT_003e2b5c < *(float *)(param_1 + 0x1e4)) &&
      (iVar4 = FUN_003736fc(DAT_003e2b64,DAT_003e2b60,param_1 + 0x1a4), iVar4 != 0)) ||
     ((*(float *)(param_1 + 0x1e4) < fVar1 &&
      (iVar4 = FUN_003736fc(DAT_003e2b68,uVar2,param_1 + 0x1a4), iVar4 != 0)))) {
    if (DAT_003e2b6c < *(int *)(param_1 + 0x54)) {
      FUN_00375bcc(param_1,DAT_003e2b70);
    }
    else {
      FUN_00375bcc(param_1,DAT_003e2b74);
    }
  }
  if (*(int *)(param_1 + 0x1e0) + 0xbf200000U < 0xd00000) {
    fVar5 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xbe) + 17000));
    fVar6 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xbe) + 17000));
    sVar3 = *(short *)(param_1 + 0xbe) + *(short *)(DAT_003e2b78 + param_1);
    *(short *)(param_1 + 0xbe) = sVar3;
    fVar7 = (float)FUN_002cfca0((int)(short)(sVar3 + 17000));
    fVar1 = DAT_003e2b7c;
    *(float *)(param_1 + 0x28) =
         *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x54) * (fVar7 - fVar5) * DAT_003e2b7c;
    fVar5 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xbe) + 17000));
    *(float *)(param_1 + 0x30) =
         *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x54) * (fVar5 - fVar6) * fVar1;
  }
  return;
}
