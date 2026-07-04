// OoT3D decomp @ 002a2424  name=FUN_002a2424  size=360

undefined4 FUN_002a2424(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = fRam002a2594;
  fVar1 = fRam002a2590;
  if (param_1 != (undefined4 *)0x0) {
    if (param_1 < param_1 + (uint)*(byte *)(param_1 + 0x60) * 6) {
      iVar5 = *piRam002a258c;
      puVar4 = param_1;
      do {
        fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar8 = (float)puVar4[1] - (float)param_1[0x68] * fVar8 * fVar1;
        puVar4[1] = fVar8;
        if (fVar8 <= fVar2) {
          fVar8 = fVar2;
        }
        puVar4[1] = fVar8;
        fVar7 = (float)puVar4[3];
        uVar6 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar2) << 0x1f |
                (uint)(fVar7 == fVar2) << 0x1e;
        bVar3 = (byte)(uVar6 >> 0x18);
        if (!(bool)(bVar3 >> 6 & 1) && (bool)(bVar3 >> 7) == (NAN(fVar7) || NAN(fVar2))) {
          fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),
                                             (byte)(uVar6 >> 0x15) & 3);
          fVar7 = fVar7 - (float)param_1[0x68] * fVar9 * fVar1;
          puVar4[3] = fVar7;
          uVar6 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar2) << 0x1f |
                  (uint)(fVar7 == fVar2) << 0x1e;
          bVar3 = (byte)(uVar6 >> 0x18);
          if ((bool)(bVar3 >> 6 & 1) || (bool)(bVar3 >> 7) != (NAN(fVar7) || NAN(fVar2))) {
            fVar7 = fVar2;
          }
          puVar4[3] = fVar7;
        }
        fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(uVar6 >> 0x15) & 3)
        ;
        fVar8 = (float)puVar4[2] + fVar8 * fVar7 * fVar1;
        puVar4[2] = fVar8;
        in_fpscr = uVar6 & 0xfffffff | (uint)((float)puVar4[3] == fVar2) << 0x1e;
        fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar7 = (float)puVar4[4] + (float)puVar4[3] * fVar7 * fVar1;
        puVar4[4] = fVar7;
        if (SUB41(in_fpscr >> 0x1e,0)) {
          fVar8 = fVar8 - fVar7;
          fVar7 = (float)param_1[0x6b];
          uVar6 = uVar6 & 0xfffffff | (uint)(fVar8 < fVar7) << 0x1f | (uint)(fVar8 == fVar7) << 0x1e
          ;
          in_fpscr = uVar6 | (uint)(NAN(fVar8) || NAN(fVar7)) << 0x1c;
          bVar3 = (byte)(uVar6 >> 0x18);
          if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            puVar4[3] = *puVar4;
          }
        }
        puVar4 = puVar4 + 6;
      } while (puVar4 < param_1 + (uint)*(byte *)(param_1 + 0x60) * 6);
    }
    if (param_1[0x74] == 1) {
      *(short *)(param_1 + 0x72) = *(short *)(param_1 + 0x72) / 2;
    }
    bVar3 = *(char *)((int)param_1 + 0x1b1) + 1;
    *(byte *)((int)param_1 + 0x1b1) = bVar3;
    if (*(byte *)(param_1 + 0x6c) < bVar3) {
      return 1;
    }
  }
  return 0;
}

