// OoT3D decomp @ 001883ac  name=FUN_001883ac  size=204

void FUN_001883ac(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x124);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
  }
  iVar1 = FUN_0037571c(param_2);
  if (((iVar1 != 0) &&
      (*(short **)(&DAT_000022dc + param_2 + *(short *)(DAT_00188478 + param_1) * 4) != (short *)0x0
      )) && (**(short **)(&DAT_000022dc + param_2 + *(short *)(DAT_00188478 + param_1) * 4) == 2)) {
    iVar1 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                             *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x8b,0,0,0,2,1
                            );
    if (iVar1 != 0) {
      FUN_0037572c(DAT_0018847c);
    }
    *(undefined4 *)(param_1 + 0x2a4) = DAT_00188480;
    *(undefined1 *)(param_1 + 0x28a) = 0xff;
  }
  return;
}
