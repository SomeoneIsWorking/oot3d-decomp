// OoT3D decomp @ 00405c94  name=FUN_00405c94  size=756

int FUN_00405c94(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  undefined4 local_44;
  int iStack_40;
  int iStack_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 uStack_2c;
  int local_28;

  fVar13 = DAT_00405f8c;
  iVar9 = 0;
  iVar6 = *(int *)(param_1 + 0xc0);
  uVar7 = (uint)*(byte *)(param_1 + 0x85) * param_3;
  if (param_5 != 0) {
    iVar9 = *(int *)(param_1 + 0xc4);
  }
  lVar3 = (longlong)(int)uVar7 * (longlong)DAT_00405f88 + ((ulonglong)uVar7 << 0x20);
  iVar8 = (int)((ulonglong)lVar3 >> 0x20);
  iVar1 = iVar8 >> 6;
  iVar8 = iVar1 - (iVar8 >> 0x1f);
  uVar10 = (undefined1)param_2;
  if (param_5 != 0 && iVar9 != 0) {
    *(undefined1 *)(iVar9 + 0x126) = uVar10;
    fVar12 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = fVar12 * fVar13;
    *(float *)(iVar9 + 0x100) = fVar12 * fVar12;
  }
  if (*(char *)(param_1 + 0x27) == '\0') {
    if (iVar9 != 0) goto LAB_00405e0c;
  }
  else {
    iVar9 = *(int *)(param_1 + 0xc4);
    if (iVar9 != 0) {
      if (*(char *)(iVar9 + 0x90) != '\x04') {
        *(undefined1 *)(iVar9 + 0x126) = uVar10;
        fVar12 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
        fVar12 = fVar12 * fVar13;
        *(float *)(iVar9 + 0x100) = fVar12 * fVar12;
        *(undefined4 *)(iVar9 + 0x120) = param_4;
        goto LAB_00405e0c;
      }
      FUN_00309fa8(iVar9,iVar1,(int)lVar3);
    }
  }
  uStack_2c = *(undefined4 *)(DAT_00405f90 + 0x18);
  local_44 = *(undefined4 *)(param_1 + 0x50);
  local_38 = param_4;
  if (param_5 != 0) {
    local_38 = 0xffffffff;
  }
  local_34 = (int)*(char *)(param_1 + 0x87);
  local_30 = (uint)*(byte *)(iVar6 + 0x6d) + (uint)*(byte *)(param_1 + 0x89);
  iStack_40 = param_2;
  iStack_3c = iVar8;
  local_28 = param_1;
  iVar9 = FUN_00407818(*(undefined4 *)(param_1 + 0xc0),*(undefined1 *)(param_1 + 0x4d),&local_44);
  if (iVar9 == 0) {
    return 0;
  }
  bVar11 = *(char *)(iVar9 + 0x128) != '\0';
  if (bVar11) {
    param_5 = *(int *)(param_1 + 0xc4);
  }
  if (bVar11 && param_5 != 0) {
    do {
      if (*(char *)(param_5 + 0x128) == *(char *)(iVar9 + 0x128)) {
        FUN_0030a030(param_5);
      }
      param_5 = *(int *)(param_5 + 0x138);
    } while (param_5 != 0);
  }
  *(undefined4 *)(iVar9 + 0x138) = *(undefined4 *)(param_1 + 0xc4);
  *(int *)(param_1 + 0xc4) = iVar9;
LAB_00405e0c:
  if (*(byte *)(param_1 + 0x8c) < 0x80) {
    FUN_00309f90();
  }
  if (*(byte *)(param_1 + 0x8d) < 0x80) {
    FUN_00309f1c();
  }
  if (*(byte *)(param_1 + 0x8e) < 0x80) {
    *(byte *)(iVar9 + 0xa8) = *(byte *)(param_1 + 0x8e);
  }
  if (*(byte *)(param_1 + 0x8f) < 0x80) {
    FUN_0030a074(iVar9 + 0x90);
  }
  if (*(short *)(param_1 + 0x90) < 0x80) {
    FUN_00309efc(iVar9 + 0x90);
  }
  fVar13 = *(float *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0x4b) != '\0') {
    fVar12 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x8a) - param_2,
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar13 = fVar12 + fVar13;
  }
  uVar7 = (uint)*(byte *)(param_1 + 0x8b);
  if (uVar7 == 0) {
    FUN_00309ee4(iVar9,param_4,0);
  }
  else {
    uVar2 = in_fpscr & 0xfffffff | (uint)(fVar13 < DAT_00405f94) << 0x1f;
    if (SUB41(uVar2 >> 0x1f,0) != (NAN(fVar13) || NAN(DAT_00405f94))) {
      fVar13 = -fVar13;
    }
    fVar12 = (float)VectorSignedToFloat(uVar7 * uVar7,(byte)(uVar2 >> 0x15) & 3);
    FUN_00309ee4(iVar9,((int)(fVar13 * fVar12) >> 5) * 5,1);
  }
  *(undefined1 *)(param_1 + 0x8a) = uVar10;
  if (*(char *)(param_1 + 0x49) == '\0') {
    uVar10 = 0xff;
  }
  else {
    uVar10 = 0;
  }
  if ((uint)*(ushort *)(iVar9 + 0x114) < (uint)*(ushort *)(iVar9 + 0x112)) {
    bVar5 = *(byte *)(iVar9 + 0x110);
    cVar4 = FUN_00368d94(((uint)*(byte *)(iVar9 + 0x111) - (uint)bVar5) *
                         (uint)*(ushort *)(iVar9 + 0x114));
    bVar5 = cVar4 + bVar5;
  }
  else {
    bVar5 = *(byte *)(iVar9 + 0x111);
  }
  *(byte *)(iVar9 + 0x110) = bVar5;
  *(undefined1 *)(iVar9 + 0x111) = uVar10;
  *(undefined2 *)(iVar9 + 0x112) = 0;
  *(undefined2 *)(iVar9 + 0x114) = 0;
  *(undefined1 *)(iVar9 + 0xc9) = *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x54);
  *(undefined1 *)(iVar9 + 0x124) = *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x2c);
  *(undefined1 *)(iVar9 + 0x125) = *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x2d);
  FUN_00309ea4(*(undefined4 *)(iVar9 + 0x134),(int)*(char *)(param_1 + 0x41));
  return iVar9;
}
