// OoT3D decomp @ 00461018  name=FUN_00461018  size=404

void FUN_00461018(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;

  *(undefined1 *)(param_1 + 5) = 0;
  cVar1 = *(char *)((int)param_1 + 0x13);
  if (cVar1 == '\x01') {
    uVar7 = DAT_004611ac[1];
  }
  else if (cVar1 == '\x02') {
    uVar7 = DAT_004611ac[2];
  }
  else if (cVar1 == '\x03') {
    uVar7 = DAT_004611ac[3];
  }
  else {
    uVar7 = *DAT_004611ac;
  }
  FUN_00348a64(*DAT_004611b8,0,uVar7,DAT_004611b4,DAT_004611b4,DAT_004611b0,DAT_004611b0);
  iVar6 = DAT_004611cc;
  fVar5 = DAT_004611c8;
  fVar4 = DAT_004611c4;
  fVar3 = DAT_004611c0;
  piVar2 = DAT_004611bc;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004611bc + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar8 = DAT_004611c8 / (DAT_004611c0 / fVar8);
  if (*(char *)((int)param_1 + 0x12) != '\0') {
    fVar8 = fVar8 * DAT_004611c4;
  }
  param_1[3] = fVar8;
  uVar7 = DAT_004611d0;
  cVar1 = *(char *)((int)param_1 + 0x11);
  if (cVar1 == '\0') {
    *param_1 = 0xff;
    *(undefined4 *)(iVar6 + 0x5b8) = 0xff;
  }
  else if (cVar1 == '\x01') {
    *param_1 = DAT_004611d0;
    *(undefined4 *)(iVar6 + 0x5b8) = uVar7;
  }
  else if (cVar1 == '\x02') {
    *(undefined1 *)((int)param_1 + 3) = 100;
    *(undefined1 *)((int)param_1 + 2) = 100;
    *(undefined1 *)((int)param_1 + 1) = 100;
    *(undefined1 *)param_1 = 0xff;
    *(undefined4 *)(iVar6 + 0x5b8) = *param_1;
  }
  else {
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    param_1[3] = (fVar5 / (fVar3 / fVar8)) * DAT_004611d4;
    if (*(char *)((int)param_1 + 0x13) == '\x01') {
      *param_1 = 0xff;
    }
    else {
      *param_1 = uVar7;
    }
  }
  if (*(char *)(param_1 + 4) == '\0') {
    param_1[2] = fVar5;
    if (*(char *)((int)param_1 + 0x13) == '\x02') {
      FUN_0037547c(DAT_004611e4,0,4,DAT_004611e0,DAT_004611e0,DAT_004611dc);
      return;
    }
  }
  else {
    param_1[2] = DAT_004611d8;
    if (*(char *)((int)param_1 + 0x11) == '\x03') {
      param_1[2] = fVar4;
    }
  }
  return;
}
