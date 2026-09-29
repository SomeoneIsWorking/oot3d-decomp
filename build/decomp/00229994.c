// OoT3D decomp @ 00229994  name=FUN_00229994  size=388

void FUN_00229994(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  ushort uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  fVar1 = DAT_00229b2c;
  if ((short)*(ushort *)(param_1 + 0x1c) < 1) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  *(ushort *)(param_1 + 0x1ac) = *(ushort *)(param_1 + 0x1c) >> 0xb;
  fVar2 = DAT_00229b30;
  *(ushort *)(param_1 + 0x1a8) = (ushort)(((uint)*(ushort *)(param_1 + 0x1c) << 0x15) >> 0x1b);
  *(ushort *)(param_1 + 0x1ae) = *(ushort *)(param_1 + 0x1c) & 0x3f;
  *(undefined2 *)(param_1 + 0x1b0) = 0;
  *(undefined2 *)(param_1 + 0x1aa) = 0;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x1c0) = fVar2 + fVar7 * fVar1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  switch(*(undefined2 *)(param_1 + 0x1ac)) {
  case 0:
    *(undefined2 *)(param_1 + 0x1bc) = 0x2d;
    *(undefined2 *)(param_1 + 0x1a8) = 5;
    if (*(short *)(param_2 + 0x104) == 0x5e) {
      *(undefined1 *)(param_1 + 0x1be) = 1;
      *(undefined2 *)(param_1 + 0x1a8) = 3;
    }
    iVar3 = DAT_00229b34;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    uVar5 = DAT_00229b3c;
    if (*(char *)(iVar3 + 0xe) != '\0') {
      uVar4 = *(ushort *)(param_2 + 0x104);
      bVar6 = uVar4 == 6;
      if (bVar6) {
        uVar4 = (ushort)*(byte *)(param_1 + 3);
      }
      if (bVar6 && uVar4 == 0xe) {
        uVar5 = FUN_0036aa20(DAT_00229b38,DAT_00229b38,DAT_00229b38,param_2 + 0x208c,param_1,param_2
                             ,0xa7);
        *(undefined4 *)(param_1 + 0x1c8) = uVar5;
        FUN_00375d3c(param_2,param_2 + 0x208c,uVar5,5);
        uVar5 = DAT_00229b3c;
      }
    }
    break;
  case 1:
    *(undefined2 *)(param_1 + 0x1a8) = 2;
    uVar5 = DAT_00229b40;
    break;
  case 2:
  case 3:
    uVar5 = DAT_00229b48;
    if (*(short *)(param_2 + 0x104) == 0x51) {
      *(short *)(param_1 + 0x1ae) = (short)DAT_00229b44;
      uVar5 = DAT_00229b48;
    }
    break;
  case 4:
    uVar5 = DAT_00229b4c;
    break;
  default:
    goto switchD_00229a30_default;
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar5;
switchD_00229a30_default:
  return;
}
