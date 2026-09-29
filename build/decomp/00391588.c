// OoT3D decomp @ 00391588  name=FUN_00391588  size=804

void FUN_00391588(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_r1;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

  fVar12 = *(float *)(param_1 + 0x98);
  fVar11 = DAT_003918d0;
  if ((int)fVar12 <= DAT_003918d4) {
    fVar11 = DAT_003918d8;
  }
  if ((int)fVar12 <= DAT_003918d4) {
    fVar11 = fVar12 + fVar11;
  }
  if ((*(int *)(param_1 + 0x124) != 0) && (*(int *)(*(int *)(param_1 + 0x124) + 0x13c) == 0)) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  *(float *)(param_1 + 0x6c) = fVar11;
  uVar3 = DAT_003918e4;
  uVar2 = DAT_003918e0;
  if ((int)(*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84)) < DAT_003918dc) {
    FUN_0036e168(DAT_003918f4,DAT_003918e0,DAT_003918f0,DAT_003918e4,param_1 + 100);
  }
  else {
    FUN_0036e168(DAT_003918ec,DAT_003918e0,DAT_003918e8,DAT_003918e4,param_1 + 100);
  }
  if (*(int *)(param_1 + 0x660) == 0) {
    FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,DAT_003918f8,0);
  }
  else {
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + -1;
  }
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x15e;
  FUN_003731e0(param_1 + 0x1a4);
  FUN_00375a18(param_1 + 0x67c,4000,1,500,0);
  uVar4 = DAT_003918fc;
  *(short *)(param_1 + 0x67e) = *(short *)(param_1 + 0x67e) + *(short *)(param_1 + 0x67c);
  FUN_0036e168(DAT_00391900,uVar2,uVar4,uVar3,param_1 + 0x678);
  FUN_00375bcc(param_1,DAT_00391904);
  uVar2 = DAT_00391908;
  bVar1 = *(byte *)(param_1 + 0x764);
  if ((bVar1 & 4) != 0) {
    *(byte *)(param_1 + 0x765) = *(byte *)(param_1 + 0x765) & 0x7f;
    *(undefined1 *)(param_1 + 0xb7) = 0;
    FUN_00374a58(uVar2,param_1 + 0x1a4,3);
    uVar2 = DAT_0039190c;
    *(undefined4 *)(param_1 + 0x63c) = 7;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    *(undefined4 *)(param_1 + 0x644) = DAT_00391910;
    return;
  }
  bVar8 = (bVar1 & 2) == 0;
  uVar6 = extraout_r1;
  if (bVar8) {
    uVar6 = (uint)*(byte *)(param_1 + 0x69d);
  }
  bVar9 = (uVar6 & 2) == 0;
  bVar10 = bVar8 && bVar9;
  if (bVar8 && bVar9) {
    bVar10 = (*(ushort *)(param_1 + 0x90) & 1) == 0;
  }
  if (bVar10) {
    return;
  }
  uVar6 = *(uint *)(DAT_00391914 + param_2);
  *(byte *)(param_1 + 0x764) = bVar1 & 0xfd;
  uVar4 = DAT_0039191c;
  uVar2 = DAT_00391918;
  if ((*(byte *)(param_1 + 0x69d) & 2) == 0) {
    if (*(uint *)(param_1 + 0x758) == uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) goto LAB_00391868;
  }
  iVar7 = 4;
  local_28 = uVar3;
  local_24 = uVar3;
  local_20 = uVar3;
  do {
    local_34 = (float)FUN_003738a8(uVar2);
    local_34 = local_34 + *(float *)(param_1 + 0x28);
    local_30 = (float)FUN_003738a8(uVar4);
    local_30 = local_30 + *(float *)(param_1 + 0x2c);
    local_2c = (float)FUN_003738a8(uVar2);
    local_2c = local_2c + *(float *)(param_1 + 0x30);
    FUN_003642f4(param_2,&local_34,&local_28,&local_28,0x28,7,0xff,0xff,0xff,0xff,0xff,0,0,1,0xb,1);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
LAB_00391868:
  uVar5 = *(uint *)(param_1 + 0x758);
  bVar8 = uVar5 == uVar6;
  if (bVar8) {
    uVar5 = (uint)*(byte *)(param_1 + 0x69d);
  }
  if (bVar8 && (uVar5 & 2) == 0) {
    return;
  }
  if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
    FUN_0035e4f4(param_2,param_1 + 0x28,DAT_00391920,1,1,0x28);
  }
  FUN_00374444(param_2,param_1,param_1 + 0x28,0x20);
  FUN_00374428(param_1);
  return;
}
