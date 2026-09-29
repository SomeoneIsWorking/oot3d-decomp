// OoT3D decomp @ 0016bee4  name=FUN_0016bee4  size=460

void FUN_0016bee4(int param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;

  fVar3 = DAT_0016c0b8;
  fVar9 = DAT_0016c0b4;
  fVar6 = DAT_0016c0b0;
  if (((*(ushort *)(*(int *)(param_1 + 0x124) + 0x248) & 4) == 0) ||
     (*(char *)(*(int *)(param_1 + 0x124) + 0x271) != '\0')) {
    FUN_0034e988(*(undefined4 *)(param_1 + 0x178));
    local_2c = *(float *)(param_1 + 0x240) * DAT_0016c0c4;
    local_28 = *(float *)(param_1 + 0x244) * DAT_0016c0c4;
    local_24 = *(float *)(param_1 + 0x248) * DAT_0016c0c4;
    fVar6 = fVar9 - (local_2c + local_28 + local_24) * fVar6;
  }
  else {
    FUN_0036879c(*(undefined4 *)(param_1 + 0x178));
    local_2c = fVar9;
    local_28 = DAT_0016c0bc;
    local_24 = fVar3;
    fVar6 = DAT_0016c0c0;
  }
  fVar7 = fVar9;
  if (local_2c <= fVar9) {
    fVar7 = local_2c;
  }
  local_2c = fVar3;
  if (fVar3 < fVar7) {
    local_2c = fVar7;
  }
  fVar7 = fVar9;
  if (local_28 <= fVar9) {
    fVar7 = local_28;
  }
  local_28 = fVar3;
  if (fVar3 < fVar7) {
    local_28 = fVar7;
  }
  fVar7 = fVar9;
  if (local_24 <= fVar9) {
    fVar7 = local_24;
  }
  local_24 = fVar3;
  if (fVar3 < fVar7) {
    local_24 = fVar7;
  }
  if (fVar6 <= fVar9) {
    fVar9 = fVar6;
  }
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar3) << 0x1f | (uint)(fVar9 == fVar3) << 0x1e;
  uVar5 = uVar1 | (uint)(NAN(fVar9) || NAN(fVar3)) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  local_20 = fVar3;
  if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar5 >> 0x1c) & 1)) {
    local_20 = fVar9;
  }
  iVar4 = *(int *)(param_1 + 0x178);
  *(undefined1 *)(iVar4 + 0x1b7) = *(undefined1 *)(iVar4 + 0x1b6);
  *(undefined1 *)(iVar4 + 0x1b6) = 0;
  FUN_00357388(param_1,&local_2c,5,0);
  *(undefined1 *)(*(int *)(param_1 + 0x178) + 0x1b6) =
       *(undefined1 *)(*(int *)(param_1 + 0x178) + 0x1b7);
  uVar8 = VectorSignedToFloat((int)*(short *)(param_1 + 0x238),(byte)(uVar5 >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x2f0) = uVar8;
  FUN_003583d4(param_1,param_2,param_1 + 0x25c,0,0x23);
  return;
}
