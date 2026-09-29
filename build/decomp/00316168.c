// OoT3D decomp @ 00316168  name=FUN_00316168  size=152

void FUN_00316168(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float local_50;
  float local_4c;
  undefined4 uStack_48;

  local_50 = *(float *)(param_1 + 0x28);
  uStack_48 = *(undefined4 *)(param_1 + 0x30);
  local_4c = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88);
  FUN_0036e670(param_2,&local_50,0,0,0,500);
  fVar1 = DAT_00316314;
  fVar2 = (float)FUN_002cfca0(0);
  FUN_00338f60(0);
  local_50 = fVar2 * fVar1;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
