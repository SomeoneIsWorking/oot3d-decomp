// OoT3D decomp @ 0021ccfc  name=FUN_0021ccfc  size=200

void FUN_0021ccfc(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined4 local_20;
  float local_1c;
  undefined4 uStack_18;

  puVar1 = DAT_0021cdc4;
  if (*(short *)(param_1 + 0x1ec) == 0) {
    uVar2 = FUN_0036ae14(param_1 + 0x2fc,*DAT_0021cdc4);
    *(short *)(param_1 + 0x1fe) = (short)uVar2;
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_0021cdd0,DAT_0021cdcc,uVar2,DAT_0021cdc8,param_1 + 0x2fc,*puVar1,2);
    local_20 = *(undefined4 *)(param_1 + 0x28);
    uStack_18 = *(undefined4 *)(param_1 + 0x30);
    local_1c = *(float *)(param_1 + 0x2c) + DAT_0021cdd4;
    FUN_0036f9d0(DAT_0021cdd8,param_2,&local_20,0,10,3,0xf,0xffffffff,10,0);
    FUN_00375bcc(param_1,DAT_0021cddc);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0021cde0;
  }
  return;
}
