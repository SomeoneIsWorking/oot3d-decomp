// OoT3D decomp @ 00263fb8  name=FUN_00263fb8  size=348

undefined4 FUN_00263fb8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;

  FUN_0036df4c(param_3,param_4);
  FUN_0036df4c(param_3 + 0xc,param_4 + 0xc);
  FUN_0036df4c(param_3 + 0x18,param_4 + 0x18);
  *(undefined4 *)(param_3 + 0x38) = 0;
  iVar3 = DAT_00264118;
  uVar2 = DAT_00264114;
  uVar4 = (ushort)*(byte *)(param_4 + 0x29);
  if (*(byte *)(param_4 + 0x29) == 0) {
    uVar4 = 0x10;
  }
  *(ushort *)(param_3 + 0x60) = uVar4;
  *(undefined2 *)(param_3 + 0x5c) = *(undefined2 *)(param_3 + 0x60);
  *(undefined4 *)(param_3 + 0x24) = uVar2;
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(iVar3 + (uint)*(byte *)(param_4 + 0x28) * 4);
  sVar1 = *(short *)(param_4 + 0x24);
  *(short *)(param_3 + 0x44) = sVar1;
  *(undefined2 *)(param_3 + 0x56) = *(undefined2 *)(param_4 + 0x26);
  *(undefined2 *)(param_3 + 0x48) = 0xff;
  *(undefined2 *)(param_3 + 0x4a) = 0xff;
  *(undefined2 *)(param_3 + 0x4c) = 0xff;
  *(undefined2 *)(param_3 + 0x4e) = 0xff;
  *(undefined2 *)(param_3 + 0x50) = 0;
  *(undefined2 *)(param_3 + 0x52) = 0;
  *(undefined2 *)(param_3 + 0x54) = 200;
  if (sVar1 < 0) {
    *(undefined2 *)(param_3 + 0x5a) = 1;
    *(short *)(param_3 + 0x44) = -sVar1;
  }
  else {
    *(undefined2 *)(param_3 + 0x5a) = 0;
  }
  FUN_0034ea48(*(undefined4 *)(param_3 + 100),DAT_0026411c);
  FUN_0034ea6c(*(undefined4 *)(param_3 + 100),DAT_00264120);
  if (*(byte *)(param_4 + 0x28) < 2) {
    fVar5 = DAT_00264124;
    if (*(short *)(param_3 + 0x5a) != 0) {
      fVar5 = DAT_00264128;
    }
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x44),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x44),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_0020d544(param_1,5,param_3,(int)(short)(int)(fVar7 * (float)DAT_0026412c[1] * fVar5),
                 (int)(short)(int)(fVar6 * (float)DAT_0026412c[2]),*DAT_0026412c);
  }
  return 1;
}
