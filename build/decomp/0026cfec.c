// OoT3D decomp @ 0026cfec  name=FUN_0026cfec  size=284

void FUN_0026cfec(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;

  FUN_003731e0(param_1 + 0x1a4);
  (**(code **)(param_1 + 0xb18))(param_1,param_2);
  FUN_00376864(param_1);
  iVar5 = (int)*(short *)(param_1 + 0xb20);
  if (0x1b < iVar5) {
    iVar5 = 0x1b;
  }
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(iRam0026d108 + iVar5 * 6 + 2),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(fVar6 + fRam0026d10c,uRam0026d110,param_1 + 0xc);
  fVar6 = (float)FUN_002cfca0((int)(short)((ushort)*(byte *)(param_1 + 0xb1d) << 0xb));
  uVar3 = uRam0026d120;
  uVar2 = uRam0026d118;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar6 * fRam0026d114;
  FUN_00376340(uVar3,uRam0026d11c,uVar2,param_2,param_1,4);
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xb48);
  FUN_0037322c(uRam0026d124,param_1);
  cVar1 = *(char *)(param_1 + 0xb1d);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0xb1d) = cVar1 + -1, cVar1 == '\x01')) {
    *(undefined1 *)(param_1 + 0xb1d) = 0x30;
  }
  sVar4 = *(short *)(param_1 + 0xb26) + 1;
  *(short *)(param_1 + 0xb26) = sVar4;
  if (sVar4 == 3) {
    *(undefined2 *)(param_1 + 0xb26) = 0;
  }
  return;
}
