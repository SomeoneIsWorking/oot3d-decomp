// OoT3D decomp @ 00273f28  name=FUN_00273f28  size=288

void FUN_00273f28(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;

  uVar4 = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  iVar3 = FUN_00363c10(param_2 + 0x3a58,(int)*(short *)(DAT_00274080 + uVar4 * 2));
  if (-1 < iVar3) {
    *(char *)(param_1 + 0x1b8) = (char)iVar3;
  }
  uVar1 = DAT_00274094;
  *(undefined2 *)(param_1 + 0x1b4) = *(undefined2 *)(DAT_00274084 + uVar4 * 2);
  *(undefined2 *)(param_1 + 0x1b6) = *(undefined2 *)(DAT_00274088 + uVar4 * 2);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0027408c;
  *(undefined4 *)(param_1 + 0x1a8) = DAT_00274090;
  FUN_0037572c(uVar1,param_1);
  *(undefined4 *)(param_1 + 0x1ac) = DAT_00274098;
  uVar1 = DAT_0027409c;
  switch(uVar4) {
  case 1:
    FUN_0037572c(DAT_0027409c,param_1);
    iVar3 = DAT_002740a4;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_002740a0;
    if ((*(ushort *)(iVar3 + 0xf2) & 2) != 0) {
      FUN_00374428(param_1);
      return;
    }
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x1a4) = DAT_002740a8;
    FUN_0037572c(uVar1,param_1);
    *(undefined4 *)(param_1 + 0xc4) = DAT_002740ac;
    *(undefined4 *)(param_1 + 0x140) = 0;
    return;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    FUN_0037572c(DAT_0027409c,param_1);
    fVar2 = DAT_002740b8;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_002740b0;
    *(undefined4 *)(param_1 + 0x1a8) = DAT_002740b4;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar2;
    return;
  }
  return;
}
