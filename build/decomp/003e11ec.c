// OoT3D decomp @ 003e11ec  name=FUN_003e11ec  size=296

void FUN_003e11ec(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  if (*(short *)(param_1 + 0x272) < 0x3d) {
    FUN_00375bcc(param_1,uRam003e133c);
  }
  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x270) == 1) {
    FUN_0036f00c(uRam003e1344,uRam003e1340,param_2,param_1,param_1 + 0x28,4,500,10,1);
  }
  uVar2 = uRam003e134c;
  uVar1 = uRam003e1348;
  FUN_0036fc20(uRam003e134c,uRam003e1348,param_1 + 0x6c);
  if (*(short *)(param_1 + 0x26e) != 0) {
    FUN_00370084(param_1 + 0xbc,0,2,uRam003e1364);
    *(undefined2 *)(param_1 + 0x250) = 1;
    FUN_00373500(uRam003e136c,uVar2,uRam003e1368,param_1 + 0x294);
    *(undefined2 *)(param_1 + 0x254) = 4;
    return;
  }
  uVar2 = FUN_0036ae14(param_1 + 0x1a4,0x12);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(uVar1,uRam003e1354,uVar2,uRam003e1350,param_1 + 0x1a4,0x12,0);
  uVar1 = uRam003e1358;
  *(undefined4 *)(param_1 + 0x1050) = uRam003e1358;
  *(undefined4 *)(param_1 + 0x1054) = uVar1;
  *(undefined4 *)(param_1 + 0x22c) = uRam003e135c;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x46,0x6e);
}
