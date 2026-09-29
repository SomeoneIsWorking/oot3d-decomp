// OoT3D decomp @ 003b9b70  name=FUN_003b9b70  size=248

void FUN_003b9b70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  if ((*(ushort *)(param_1 + 0x230) & 7) == 0) {
    FUN_00375bcc(param_1,uRam003b9c7c);
  }
  FUN_00373500(uRam003b9c88,uRam003b9c84,uRam003b9c80,param_1 + 100);
  FUN_00370084(param_1 + 0xbc,uRam003b9c8c,2,2000);
  FUN_00370084(param_1 + 0x36,(int)(short)(*(short *)(param_1 + 0x82) + -0x8000),2,uRam003b9c90);
  if (uRam003b9c94 <= *(uint *)(param_1 + 0x2c)) {
    return;
  }
  uVar2 = FUN_0036ae14(param_1 + 0x1a4,0x10);
  uVar1 = uRam003b9c9c;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(uRam003b9ca0,uRam003b9c9c,uVar2,uRam003b9c98,param_1 + 0x1a4,0x10,0);
  *(undefined4 *)(param_1 + 0x1050) = uRam003b9ca4;
  *(undefined4 *)(param_1 + 0x1054) = uRam003b9ca8;
  *(undefined4 *)(param_1 + 0x22c) = uRam003b9cac;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x1e,0x3c);
}
