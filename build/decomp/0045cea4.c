// OoT3D decomp @ 0045cea4  name=FUN_0045cea4  size=352

void FUN_0045cea4(char *param_1,short param_2)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int *piVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  uint local_18;

  iVar7 = DAT_0045d010;
  piVar4 = DAT_0045d004;
  cVar6 = *param_1;
  if (cVar6 != '\0') {
    if (cVar6 == '\x01') {
      cVar1 = param_1[2];
      if (cVar1 != param_1[0xc]) {
        *(ushort *)(param_1 + 8) = (ushort)*(byte *)(DAT_0045d010 + 0x5a6) - *(short *)(param_1 + 8)
        ;
        param_1[0xc] = cVar1;
      }
      fVar5 = DAT_0045d014;
      sVar3 = *(short *)(param_1 + 8);
      *(short *)(param_1 + 8) = param_2 + sVar3;
      bVar2 = *(byte *)(iVar7 + 0x5a6);
      if ((ushort)bVar2 <= (ushort)(param_2 + sVar3)) {
        *(ushort *)(param_1 + 8) = (ushort)bVar2;
        param_1[1] = '\x01';
      }
      fVar8 = (float)VectorUnsignedToFloat
                               ((uint)*(ushort *)(param_1 + 8),(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(iVar7 + 0x5a6),(byte)(in_fpscr >> 0x15) & 3);
      cVar6 = (char)(int)((fVar8 * fVar5) / fVar9);
      if (cVar1 != '\0') {
        cVar6 = -1 - cVar6;
      }
      goto LAB_0045cffc;
    }
    if (cVar6 != '\x02') {
      return;
    }
  }
  local_18 = (uint)(byte)param_1[4];
  sVar3 = *(short *)(DAT_0045d008 + *DAT_0045d004);
  if (sVar3 != 0) {
    if (sVar3 < 0) {
      *(undefined4 *)(param_1 + 4) = DAT_0045d00c;
      iVar7 = FUN_00372aa8(&local_18,0xff);
      if (iVar7 != 0) {
        *(undefined2 *)(*piVar4 + 0xd38) = 0x96;
      }
    }
    else {
      FUN_00372aa8(*DAT_0045d004 + 0xd38,0x14,0x3c);
      iVar7 = FUN_00372aa8(&local_18,0,(int)*(short *)(*piVar4 + DAT_0045d008));
      if (iVar7 != 0) {
        *(undefined2 *)(*piVar4 + 0xd38) = 0;
        param_1[1] = '\x01';
      }
    }
  }
  cVar6 = (char)local_18;
LAB_0045cffc:
  param_1[4] = cVar6;
  return;
}
