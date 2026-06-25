// OoT3D decomp @ 004ba304  name=FUN_004ba304  size=84

void FUN_004ba304(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  uVar1 = FUN_00324154(param_1 + 0x3410);
  uVar2 = VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  FUN_002bd9ec(uVar2,uVar1,*(undefined4 *)(param_2 + 0x28),param_3,param_5,param_6,
               *(undefined *)(param_2 + 0x81),0);
  return;
}

