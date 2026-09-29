// OoT3D decomp @ 00135384  name=FUN_00135384  size=1288

void FUN_00135384(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint in_fpscr;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_94;
  float local_90;
  float local_8c;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64 [2];
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;

  fVar5 = *(float *)(param_1 + 0x2c);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2)
                                     ,(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 < fVar7) << 0x1f | (uint)(fVar5 == fVar7) << 0x1e;
  uVar3 = uVar4 | (uint)(NAN(fVar5) || NAN(fVar7)) << 0x1c;
  bVar1 = (byte)(uVar4 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar3 >> 0x1c) & 1)) {
    FUN_0035bff0(param_1,param_2);
  }
  fVar7 = DAT_001357a8;
  fVar5 = DAT_001357a4;
  if (*(char *)(param_1 + 0x229) != '\0') {
    FUN_00372224(local_64,param_1 + 0x148);
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b2),(byte)(uVar3 >> 0x15) & 3);
    FUN_00369014(fVar6 * DAT_001357ac,local_64,1);
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b2),(byte)(uVar3 >> 0x15) & 3);
    FUN_00371234(fVar6 * DAT_001357b0,local_64,1);
    if (*(int *)(param_1 + 0x2fc0) != 0) {
      FUN_003721e0(*(int *)(param_1 + 0x2fc0),local_64);
      *(undefined1 *)(*(int *)(param_1 + 0x2fc0) + 0xac) = 1;
      FUN_00372170(*(undefined4 *)(param_1 + 0x2fc0),0);
    }
    if (*(int *)(param_1 + 0x2fbc) != 0) {
      FUN_003721e0(*(int *)(param_1 + 0x2fbc),local_64);
      *(undefined1 *)(*(int *)(param_1 + 0x2fbc) + 0xac) = 1;
      FUN_00372170(*(undefined4 *)(param_1 + 0x2fbc),0);
    }
    if ((*(short *)(param_1 + 0x1be) == 0) ||
       (uVar4 = uVar3 & 0xfffffff | (uint)(*(float *)(param_1 + 0x2c) < fVar5) << 0x1f,
       uVar3 = uVar4 | (uint)(NAN(*(float *)(param_1 + 0x2c)) || NAN(fVar5)) << 0x1c,
       (byte)(uVar4 >> 0x1f) != ((byte)(uVar3 >> 0x1c) & 1))) {
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28)
                                                        + 2),(byte)(uVar3 >> 0x15) & 3);
      uVar3 = uVar3 & 0xfffffff | (uint)(fVar6 <= *(float *)(param_1 + 0x2c)) << 0x1d;
      if (SUB41(uVar3 >> 0x1d,0)) goto LAB_00135590;
    }
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) +
                                                      2),(byte)(uVar3 >> 0x15) & 3);
    uVar3 = uVar3 & 0xfffffff | (uint)(fVar6 <= *(float *)(param_1 + 0x2c)) << 0x1d;
    if (SUB41(uVar3 >> 0x1d,0)) {
      uVar2 = 0xa0;
      fVar6 = fVar5;
    }
    else {
      uVar2 = 100;
      fVar6 = DAT_001357b4;
    }
    FUN_003713fc(*(undefined4 *)(param_1 + 0x28),fVar6,*(undefined4 *)(param_1 + 0x30),&local_94,0);
    local_94 = local_94 * DAT_001357b8;
    local_84 = local_84 * DAT_001357b8;
    local_74 = local_74 * DAT_001357b8;
    local_90 = local_90 * fVar7;
    local_80 = local_80 * fVar7;
    local_70 = local_70 * fVar7;
    local_8c = local_8c * DAT_001357b8;
    local_7c = local_7c * DAT_001357b8;
    local_6c = local_6c * DAT_001357b8;
    FUN_001d03ec(param_1,&local_94,uVar2,param_2);
  }
LAB_00135590:
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2)
                                     ,(byte)(uVar3 >> 0x15) & 3);
  uVar4 = uVar3 & 0xfffffff | (uint)(*(float *)(param_1 + 0x2c) == fVar6) << 0x1e |
          (uint)(fVar6 <= *(float *)(param_1 + 0x2c)) << 0x1d;
  bVar1 = (byte)(uVar4 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    FUN_0035bff0(param_1,param_2);
  }
  if ((*(short *)(param_1 + 0xfba) != 0) && (*(short *)(param_1 + 0xfb8) < 4)) {
    FUN_003695cc(fVar5,DAT_001357c0,fVar7,*(float *)(param_1 + 0x1e0) * DAT_001357bc,
                 *(undefined4 *)(param_1 + 0x2fc4),0,4);
    fVar10 = *(float *)(param_1 + 0xfcc) - *(float *)(param_1 + 0xfc0);
    fVar6 = *(float *)(param_1 + 0xfd0);
    fVar8 = *(float *)(param_1 + 0xfc4);
    fVar9 = *(float *)(param_1 + 0xfd4) - *(float *)(param_1 + 0xfc8);
    uVar2 = FUN_003696ec(fVar10,fVar9);
    fVar6 = (float)FUN_003696ec(fVar6 - fVar8,SQRT(fVar10 * fVar10 + fVar9 * fVar9));
    local_40 = fVar5;
    local_3c = fVar5;
    local_38 = DAT_001357c4;
    FUN_003735e8(uVar2,&local_7c,0);
    FUN_00369014(-fVar6,&local_7c,1);
    FUN_003735ac(&local_4c,&local_7c,&local_40);
    FUN_003713fc(*(float *)(param_1 + 0xfc0) + local_4c,*(float *)(param_1 + 0xfc4) + local_48,
                 *(float *)(param_1 + 0xfc8) + local_44,&local_7c,0);
    FUN_003735e8(uVar2,&local_7c,1);
    FUN_00369014(-fVar6,&local_7c,1);
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b4),(byte)(uVar4 >> 0x15) & 3);
    FUN_00371234(fVar5 * DAT_001357c8,&local_7c,1);
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b4),(byte)(uVar4 >> 0x15) & 3);
    FUN_00371234(fVar5 * DAT_001357cc,&local_7c,1);
    local_7c = local_7c * DAT_001357d0;
    local_6c = local_6c * DAT_001357d0;
    local_5c = local_5c * DAT_001357d0;
    local_78 = local_78 * DAT_001357d4;
    local_68 = local_68 * DAT_001357d4;
    local_58 = local_58 * DAT_001357d4;
    local_74 = local_74 * DAT_001357d0;
    local_64[0] = local_64[0] * DAT_001357d0;
    local_54 = local_54 * DAT_001357d0;
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b4),(byte)(uVar4 >> 0x15) & 3);
    FUN_00371234(fVar5 * DAT_001358c0,&local_7c,1);
    FUN_00369014(DAT_001358c4,&local_7c,1);
    local_7c = local_7c * DAT_001358c8;
    local_6c = local_6c * DAT_001358c8;
    local_5c = local_5c * DAT_001358c8;
    local_78 = local_78 * fVar7;
    local_68 = local_68 * fVar7;
    local_58 = local_58 * fVar7;
    local_74 = local_74 * DAT_001358c8;
    local_64[0] = local_64[0] * DAT_001358c8;
    local_54 = local_54 * DAT_001358c8;
    if (*(int *)(param_1 + 0x2fc4) != 0) {
      FUN_003721e0(*(int *)(param_1 + 0x2fc4),&local_7c);
      *(undefined1 *)(*(int *)(param_1 + 0x2fc4) + 0xac) = 1;
      FUN_00372170(*(undefined4 *)(param_1 + 0x2fc4),0);
    }
  }
  FUN_0014e65c(param_1,*(undefined4 *)(DAT_001358cc + param_2),param_2);
  return;
}
