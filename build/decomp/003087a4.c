// OoT3D decomp @ 003087a4  name=FUN_003087a4  size=708

float FUN_003087a4(float param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pcVar7 = (char *)*param_2;
  cVar2 = *pcVar7;
  piVar6 = *(int **)(pcVar7 + 4);
  if (cVar2 == '\x01') {
    if (piVar6 != (int *)0x1) {
      pcVar8 = pcVar7 + 0x10;
      piVar4 = (int *)0x0;
      if (0 < (int)piVar6) {
        do {
          fVar12 = (float)VectorSignedToFloat(*(undefined4 *)pcVar8,(byte)(in_fpscr >> 0x15) & 3);
          uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 < param_1) << 0x1f |
                  (uint)(fVar12 == param_1) << 0x1e;
          in_fpscr = uVar1 | (uint)(NAN(fVar12) || NAN(param_1)) << 0x1c;
          bVar3 = (byte)(uVar1 >> 0x18);
          if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) break;
          piVar4 = (int *)((int)piVar4 + 1);
          pcVar8 = pcVar8 + 8;
        } while ((int)piVar4 < (int)piVar6);
      }
      if (piVar4 != (int *)0x0) {
        piVar9 = piVar6;
        if (piVar4 != piVar6) {
          piVar6 = (int *)(pcVar7 + (int)piVar4 * 8 + 0x10);
          fVar14 = (float)VectorSignedToFloat(piVar6[-2],(byte)(in_fpscr >> 0x15) & 3);
          fVar12 = (float)VectorSignedToFloat(*piVar6 - piVar6[-2],(byte)(in_fpscr >> 0x15) & 3);
          return (float)piVar6[-1] +
                 ((float)piVar6[1] - (float)piVar6[-1]) * ((param_1 - fVar14) / fVar12);
        }
code_r0x00308a50:
        return *(float *)(pcVar7 + (int)piVar9 * 8 + 0x10 + -4);
      }
    }
code_r0x00308a40:
    return *(float *)(pcVar7 + 0x14);
  }
  if (cVar2 != '\x02') {
    if (cVar2 != '\x03') {
      return fRam00308a68;
    }
    if (piVar6 != (int *)0x1) {
      pcVar8 = pcVar7 + 0x10;
      piVar9 = (int *)0x0;
      if (0 < (int)piVar6) {
        do {
          fVar12 = (float)VectorSignedToFloat(*(undefined4 *)pcVar8,(byte)(in_fpscr >> 0x15) & 3);
          uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 < param_1) << 0x1f |
                  (uint)(fVar12 == param_1) << 0x1e;
          in_fpscr = uVar1 | (uint)(NAN(fVar12) || NAN(param_1)) << 0x1c;
          bVar3 = (byte)(uVar1 >> 0x18);
          if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) break;
          piVar9 = (int *)((int)piVar9 + 1);
          pcVar8 = pcVar8 + 8;
        } while ((int)piVar9 < (int)piVar6);
      }
      if (piVar9 != (int *)0x0) goto code_r0x00308a50;
    }
    goto code_r0x00308a40;
  }
  piVar4 = (int *)(pcVar7 + 0x10);
  if (piVar6 == (int *)0x1) {
    return *(float *)(pcVar7 + 0x14);
  }
  piVar10 = (int *)0x0;
  piVar9 = (int *)0x0;
  if (*(char *)(param_2 + 1) == '\0') {
code_r0x00308910:
    piVar5 = (int *)0x0;
    if (0 < (int)piVar6) {
      do {
        pcVar7 = pcVar7 + 0x10;
        fVar12 = (float)VectorSignedToFloat(*(undefined4 *)pcVar7,(byte)(in_fpscr >> 0x15) & 3);
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 < param_1) << 0x1f |
                (uint)(fVar12 == param_1) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar12) || NAN(param_1)) << 0x1c;
        bVar3 = (byte)(uVar1 >> 0x18);
        if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) break;
        piVar5 = (int *)((int)piVar5 + 1);
      } while ((int)piVar5 < (int)piVar6);
    }
    fVar12 = fRam00308a68;
    fVar14 = fRam00308a68;
    if (piVar5 != (int *)0x0) {
      bVar11 = piVar5 == piVar6;
      if (bVar11) {
        piVar5 = piVar4 + (int)piVar5 * 4;
      }
      if (bVar11) {
        return (float)piVar5[-3];
      }
      piVar9 = piVar4 + (int)piVar5 * 4;
      piVar10 = piVar9 + -4;
      fVar12 = (float)VectorSignedToFloat(piVar9[-4],(byte)(in_fpscr >> 0x15) & 3);
      fVar14 = (float)VectorSignedToFloat(*piVar9,(byte)(in_fpscr >> 0x15) & 3);
    }
  }
  else {
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(fRam00308a68 <= param_1) << 0x1d;
    if (SUB41(in_fpscr >> 0x1d,0)) {
      fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(pcVar7 + 0xc),(byte)(in_fpscr >> 0x15) & 3
                                         );
      in_fpscr = uVar1 | (uint)(param_1 <= fVar12) << 0x1d;
      if (SUB41(in_fpscr >> 0x1d,0)) goto code_r0x00308910;
    }
    piVar10 = piVar4 + (int)piVar6 * 4 + -4;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fRam00308a68 <= param_1) << 0x1d;
    fVar12 = (float)VectorSignedToFloat(piVar4[(int)piVar6 * 4 + -4],(byte)(uVar1 >> 0x15) & 3);
    fVar14 = (float)VectorSignedToFloat(*piVar4 + *(int *)(pcVar7 + 0xc) + 1,
                                        (byte)(uVar1 >> 0x15) & 3);
    piVar9 = piVar4;
    if (!SUB41(uVar1 >> 0x1d,0)) {
      fVar13 = (float)VectorSignedToFloat(*(int *)(pcVar7 + 0xc) + 1,(byte)(uVar1 >> 0x15) & 3);
      param_1 = fVar13 + param_1;
    }
  }
  if (piVar10 == (int *)0x0 || piVar9 == (int *)0x0) {
    return fRam00308a68;
  }
  fVar14 = (param_1 - fVar12) * (fRam00308a6c / (fVar14 - fVar12));
  return (float)piVar10[1] +
         ((float)piVar10[1] - (float)piVar9[1]) * (fVar14 * fRam00308a70 - fRam00308a74) * fVar14 *
         fVar14 + (param_1 - fVar12) * (fVar14 - fRam00308a6c) *
                  ((fVar14 - fRam00308a6c) * (float)piVar10[3] + fVar14 * (float)piVar9[2]);
}

