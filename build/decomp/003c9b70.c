// OoT3D decomp @ 003c9b70  name=FUN_003c9b70  size=84

void FUN_003c9b70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_003731e0(param_1 + 0x1c8);
  uVar2 = uRam003c9e94;
  uVar1 = uRam003c9e90;
  if (*(short *)(param_1 + 0x252) != 0) {
    *(short *)(param_1 + 0x252) = *(short *)(param_1 + 0x252) + -1;
  }
  FUN_0036e5e0(uVar2,uVar1,param_1 + 0x1c8);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
