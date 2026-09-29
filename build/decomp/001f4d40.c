// OoT3D decomp @ 001f4d40  name=FUN_001f4d40  size=1020

/* WARNING: Removing unreachable block (ram,0x001f4ef4) */
/* WARNING: Removing unreachable block (ram,0x001f4ee0) */
/* WARNING: Removing unreachable block (ram,0x001f4f0c) */

void FUN_001f4d40(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar8 = DAT_001f507c;
  fVar2 = DAT_001f5078;
  fVar1 = DAT_001f5074;
  fVar7 = DAT_001f5070;
  if ((*(byte *)(param_1 + 0x5b5) & 2) == 0) goto LAB_001f5010;
  *(byte *)(param_1 + 0x5b5) = *(byte *)(param_1 + 0x5b5) & 0xf9;
  FUN_00375fd0(param_1,*(undefined4 *)(param_1 + 0x5c0),1);
  if (*(char *)(param_1 + 0xb9) == '\0') {
    if (*(char *)(param_1 + 0xb8) == '\0') goto LAB_001f5010;
LAB_001f4df0:
    FUN_00375eb8(param_1);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    FUN_00375b70(param_2,param_1);
    fVar6 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x34));
    *(float *)(param_1 + 0x6c) = fVar6 * *(float *)(param_1 + 0x6c);
    *(float *)(param_1 + 100) = fVar8;
    FUN_00375c08(param_1 + 0x1d4,*(char *)(param_1 + 0x614) != '\0',1);
    uVar4 = DAT_001f5098;
    fVar6 = *(float *)(param_1 + 0x54) * fVar7;
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar6 * fVar1;
    *(float *)(param_1 + 0xc4) = fVar8;
    *(float *)(param_1 + 0x50) = fVar8;
    FUN_00375bcc(param_1,uVar4);
    if (*(char *)(param_1 + 0xb9) == '\x03') {
      FUN_00375ed8(param_1,0,0xff,0,0x28);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (*(char *)(param_1 + 0xb9) == '\x02') {
      FUN_00375ed8(param_1,0x400000,0xff,0,0x28);
      iVar5 = 0;
      do {
        FUN_003580ec(param_2,param_1,param_1 + 0x28,(int)(short)(int)(fVar6 * fVar2),0,0,
                     (int)(short)iVar5,1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
    }
    else {
      FUN_00375ed8(param_1,0x400000,0xff,0,0x28);
    }
    if ((*(uint *)(param_1 + 4) & 0x8000) != 0) {
      *(float *)(param_1 + 0x6c) = fVar8;
    }
    *(byte *)(param_1 + 0x5b5) = *(byte *)(param_1 + 0x5b5) & 0xfe;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    uVar4 = DAT_001f50ac;
  }
  else {
    if (*(char *)(param_1 + 0xb9) != '\x01') goto LAB_001f4df0;
    *(undefined4 *)(param_1 + 0x6c) = DAT_001f5080;
    *(undefined2 *)(param_1 + 0x59c) = 0x96;
    *(undefined2 *)(param_1 + 0x59e) = 0xf000;
    uVar4 = DAT_001f5084;
    *(short *)(param_1 + 0x5a0) = *(short *)(param_1 + 0x92) + -0x8000;
    FUN_003731e8(uVar4,param_1 + 0x1d4);
    uVar4 = DAT_001f5088;
  }
  *(undefined4 *)(param_1 + 0x598) = uVar4;
LAB_001f5010:
  (**(code **)(param_1 + 0x598))(param_1,param_2);
  iVar5 = DAT_001f50b0;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  fVar7 = *(float *)(param_1 + 0x54) * fVar7;
  *(short *)(param_1 + 0x34) = -*(short *)(param_1 + 0xbc);
  if (*(int *)(param_1 + 0x598) != iVar5) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      FUN_00376864(param_1);
    }
    else {
      fVar8 = fVar7 * fVar1;
      FUN_0033bd9c(param_1);
    }
    FUN_00376340(fVar7 * DAT_001f51d4,fVar7 * DAT_001f51d0,fVar7 * fVar2,param_2,param_1,7);
  }
  iVar3 = DAT_001f51d8;
  *(undefined4 *)(*(int *)(param_1 + 0x5c0) + 0x38) = *(undefined4 *)(param_1 + 0x28);
  *(float *)(*(int *)(param_1 + 0x5c0) + 0x3c) = *(float *)(param_1 + 0x2c) + fVar8;
  *(undefined4 *)(*(int *)(param_1 + 0x5c0) + 0x40) = *(undefined4 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x598) == iVar3) {
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x5a4);
  }
  if ((*(byte *)(param_1 + 0x5b5) & 1) != 0) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x5a4);
  }
  if (*(int *)(param_1 + 0x598) != iVar5) {
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x5a4);
  }
  FUN_0037322c(fVar8,param_1);
  if ((*(char *)(param_1 + 0xb7) != '\0') &&
     (iVar5 = FUN_003736fc(DAT_001f51e0,DAT_001f51dc,param_1 + 0x1d4), iVar5 != 0)) {
    FUN_00375bcc(param_1,DAT_001f51e4);
    return;
  }
  return;
}
