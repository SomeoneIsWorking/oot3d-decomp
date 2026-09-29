// OoT3D decomp @ 003b30ac  name=FUN_003b30ac  size=352

void FUN_003b30ac(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  undefined4 local_bc [36];
  int local_2c;
  int local_28;

  if (*(float *)(param_1 + 0xec) * *(float *)(param_1 + 0xec) +
      *(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0xf4) <
      *(float *)(DAT_003b320c + ((int)*(short *)(param_1 + 0x1c) & 3U) * 4) *
      *(float *)(param_1 + 0x1dc)) {
    uVar5 = (int)*(short *)(param_1 + 0x1c) & 3;
    iVar1 = DAT_003b320c + 0x48;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    (**(code **)(iVar1 + uVar5 * 4))(local_bc,param_1);
    uVar4 = 0;
    uVar2 = (uint)((int)*(short *)(param_1 + 0x1c) << 0x14) >> 0x1c;
    if (0xc < uVar2) {
      uVar2 = 0;
    }
    local_28 = (int)(short)(*(ushort *)(DAT_003b3210 + ((int)*(short *)(param_1 + 0x1c) & 3U) * 2) &
                            0xf0ff | (ushort)(uVar2 << 8));
    psVar7 = (short *)(DAT_003b3210 + -0xc + uVar5 * 2);
    if (0 < *psVar7) {
      iVar1 = DAT_003b3210 + -6;
      local_2c = param_2 + 0x208c;
      do {
        iVar6 = param_1 + uVar4 * 4;
        if ((*(int *)(iVar6 + 0x1a8) == 0) &&
           ((*(ushort *)(param_1 + 0x1d8) >> (uVar4 & 0xff) & 1) == 0)) {
          iVar3 = z_actor_003738d0(local_bc[uVar4 * 3],local_bc[uVar4 * 3 + 1],
                                   local_bc[uVar4 * 3 + 2],local_2c,param_2,
                                   (int)*(short *)(iVar1 + uVar5 * 2),
                                   (int)*(short *)(param_1 + 0x34),0,(int)*(short *)(param_1 + 0x38)
                                   ,local_28,1);
          *(int *)(iVar6 + 0x1a8) = iVar3;
          if (iVar3 != 0) {
            *(undefined1 *)(iVar3 + 3) = *(undefined1 *)(param_1 + 3);
          }
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)*psVar7);
    }
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003b3214;
  }
  return;
}
