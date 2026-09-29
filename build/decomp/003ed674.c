// OoT3D decomp @ 003ed674  name=FUN_003ed674  size=328

void FUN_003ed674(int param_1,int param_2)

{
  ushort uVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;
  float local_28;
  float local_24;
  float local_20;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  uVar3 = DAT_003ed7c4;
  puVar2 = DAT_003ed7c0;
  if ((*(ushort *)(param_1 + 0x978) & 2) != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0xf8);
    uVar1 = (ushort)DAT_003ed7bc;
    if (((DAT_003ed7c0[1] & 1) == 0) &&
       (iVar8 = FUN_003679b4(DAT_003ed7c0 + 1), puVar5 = DAT_003ed7cc, uVar4 = DAT_003ed7c8,
       iVar8 != 0)) {
      *DAT_003ed7cc = uVar3;
      puVar5[1] = uVar4;
      puVar5[2] = uVar3;
    }
    if (((*puVar2 & 1) == 0) &&
       (iVar8 = FUN_003679b4(DAT_003ed7c0), puVar5 = DAT_003ed7d4, uVar4 = DAT_003ed7d0, iVar8 != 0)
       ) {
      *DAT_003ed7d4 = uVar3;
      puVar5[1] = uVar4;
      puVar5[2] = uVar3;
    }
    fVar9 = (float)FUN_00338f60();
    fVar6 = DAT_003ed7d8;
    local_28 = *(float *)(param_1 + 0x3c) + fVar9 * DAT_003ed7d8;
    local_24 = *(float *)(param_1 + 0x40) + DAT_003ed7dc;
    fVar9 = (float)FUN_002cfca0((int)(short)(uVar1 & ((ushort)uVar7 & 0x3f) * 0x2800));
    local_20 = *(float *)(param_1 + 0x44) + fVar9 * fVar6;
    FUN_0036ea98(param_2,&local_28,DAT_003ed7d4 + -3,DAT_003ed7d4,DAT_003ed7e0 + -4,DAT_003ed7e0,
                 1000,0x10);
  }
  return;
}
