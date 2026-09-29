// OoT3D decomp @ 003236d4  name=FUN_003236d4  size=424

void FUN_003236d4(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  FUN_003731e0(param_1 + 0x1a4);
  fVar3 = DAT_0032387c;
  FUN_00376340(DAT_00323880,DAT_0032387c,DAT_0032387c,param_2,param_1,4);
  FUN_00330370(param_1);
  uVar4 = DAT_00323884;
  iVar5 = FUN_003736fc(DAT_00323888,DAT_00323884,param_1 + 0x1a4);
  uVar1 = 0;
  if (iVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x90);
  }
  if (iVar5 != 0 && (uVar1 & 1) != 0) {
    iVar5 = FUN_00341df0(param_2 + 0xa98,*(undefined4 *)(param_1 + 0x7c),
                         *(undefined1 *)(param_1 + 0x81));
    FUN_0037547c(iVar5 + 0x1000001,param_1 + 0x28,4,DAT_00323890,DAT_00323890,DAT_0032388c);
  }
  iVar5 = FUN_003736fc(DAT_00323894,uVar4,param_1 + 0x1a4);
  if (iVar5 != 0) {
    FUN_0037547c(DAT_00323898,param_1 + 0x28,4,DAT_00323890,DAT_00323890,DAT_0032388c);
  }
  FUN_0032cd68(param_1,param_2);
  fVar7 = DAT_003238a4;
  fVar6 = *(float *)(param_1 + 0xbc0) + DAT_0032389c;
  *(float *)(param_1 + 0xbc0) = fVar6;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003238a0 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if (fVar7 / fVar8 <= fVar6) {
    *(undefined4 *)(param_1 + 3000) = 0x12;
    sVar2 = *(short *)(param_1 + 0xbe);
    fVar7 = (float)FUN_002cfca0((int)sVar2);
    fVar8 = *(float *)(param_1 + 0x28);
    fVar9 = *(float *)(param_1 + 0x2c) + DAT_003238a8;
    fVar6 = (float)FUN_00338f60((int)sVar2);
    z_actor_003738d0(fVar8 + fVar7 * fVar3,fVar9,*(float *)(param_1 + 0x30) + fVar6 * fVar3,
                     param_2 + 0x208c,param_2,0x16,4000,(int)*(short *)(param_1 + 0xbe),0,0xfffffff6
                     ,1);
  }
  return;
}
