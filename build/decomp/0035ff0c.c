// OoT3D decomp @ 0035ff0c  name=FUN_0035ff0c  size=108

void FUN_0035ff0c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  uint in_fpscr;

  *(undefined4 *)(param_2 + 0x1338) = param_6;
  *(undefined4 *)(param_2 + 0x1334) = param_5;
  uVar1 = FUN_0036ae14(param_5,param_7);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0035ff7c,DAT_0035ff78,uVar1,param_1,*(undefined4 *)(param_2 + 0x1334),param_7,2);
  *(undefined4 *)(param_2 + 0x1370) = param_3;
  *(undefined4 *)(param_2 + 0x1374) = param_4;
  return;
}
