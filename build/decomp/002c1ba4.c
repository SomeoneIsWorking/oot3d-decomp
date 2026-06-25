// OoT3D decomp @ 002c1ba4  name=FUN_002c1ba4  size=296

undefined4 FUN_002c1ba4(int param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  
  iVar4 = DAT_002c1cd0;
  cVar2 = *(char *)(DAT_002c1ccc + param_1);
  if ((cVar2 == '\x02') && (*(char *)(param_1 + 0x227f) != '\0')) {
    *(char *)(param_1 + 0x227f) = *(char *)(param_1 + 0x227f) + -1;
LAB_002c1be4:
    uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x88) < DAT_002c1cd4) << 0x1f;
    in_fpscr = uVar1 | (uint)(NAN(*(float *)(param_1 + 0x88)) || NAN(DAT_002c1cd4)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
      iVar5 = *(int *)(iVar4 + 0x28);
      iVar6 = iVar5 + -2;
      if ((((iVar6 < 0) || (1 < iVar6)) || (iVar6 < 0)) &&
         ((iVar5 != 4 && iVar5 != 7) && iVar5 != 0xc)) goto LAB_002c1c2c;
    }
    bVar3 = true;
  }
  else {
    *(undefined *)(param_1 + 0x227f) = 0;
    if (cVar2 == '\x02') goto LAB_002c1be4;
LAB_002c1c2c:
    bVar3 = false;
  }
  if (bVar3) {
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) goto LAB_002c1cac;
    if (*(char *)(param_1 + 0x227f) == '\0') {
      return 0;
    }
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
  }
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (!bVar3) {
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002c1cd8 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_1 + 0x227f) = (char)(int)(DAT_002c1cdc / fVar7 + DAT_002c1ce0);
    }
    return 0;
  }
LAB_002c1cac:
  *(undefined4 *)(iVar4 + 0x28) = 0;
  *(undefined2 *)(iVar4 + 4) = 0;
  *(undefined2 *)(param_1 + 0x2286) = 0;
  *(undefined2 *)(param_1 + 0x2284) = 0;
  return 1;
}

