// OoT3D decomp @ 0024ae70  name=FUN_0024ae70  size=136

undefined4 FUN_0024ae70(int param_1,int param_2)

{
  undefined4 uVar1;

  *(undefined1 *)(param_1 + 0x1a4) = 1;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  uVar1 = z_actor_003738d0(DAT_0024af04,DAT_0024af00,DAT_0024aefc,param_2 + 0x208c,param_2,0x14,0,
                           0x4000,0,DAT_0024aef8,1);
  *(undefined4 *)(param_1 + 0x1c8) = uVar1;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  return 1;
}
