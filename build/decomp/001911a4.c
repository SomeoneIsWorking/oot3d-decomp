// OoT3D decomp @ 001911a4  name=FUN_001911a4  size=712

void FUN_001911a4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;

  uVar1 = DAT_00191470;
  FUN_00373500(DAT_00191470,DAT_00191470,DAT_0019146c,param_1 + 0x378);
  if (DAT_00191474 <= *(int *)(param_1 + 0x378)) {
    *(undefined4 *)(param_1 + 0x378) = uVar1;
  }
  FUN_0034e418(param_1);
  if (*(int *)(param_1 + 0x378) == 0x3f800000) {
    if (*(short *)(param_1 + 0x1c) != 8) {
      FUN_0016cc8c(param_1,param_2,param_3);
      return;
    }
    iVar3 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar3 == 4) {
      if ((*(uint *)(param_2 + 0x18) & *DAT_00191478) != 0) {
LAB_0019128c:
        *(undefined2 *)(param_1 + 0x2a0) = *(undefined2 *)(param_1 + 0x2a2);
        FUN_0036be34(param_2,*(undefined2 *)
                              (*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4) +
                              0x116));
        return;
      }
      iVar3 = FUN_00346964(param_2);
      if (iVar3 != 0) {
        iVar3 = FUN_00369f3c(param_2);
        uVar2 = DAT_00191484;
        uVar1 = DAT_00191480;
        if (iVar3 == 0) {
          if (*(int *)(DAT_0019147c + 4) == 0) {
            iVar3 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4);
            uVar4 = (**(code **)(iVar3 + 0x1d0))(param_2,iVar3);
          }
          else {
            if ((*(ushort *)(DAT_00191488 + 0xf0) & 0x20) == 0) {
              if ((*(ushort *)(DAT_0019148c + 0x2e) & 0x1000) != 0) {
                FUN_0036be34(param_2,DAT_00191490);
                *(undefined2 *)(param_1 + 0x2a0) = 0xe;
                return;
              }
              *(undefined4 *)(param_1 + 0x330) = 0;
              *(undefined4 *)(param_1 + 0x368) = 0;
              *(undefined1 *)(param_1 + 0x2f9) = 0;
              *(undefined2 *)(param_1 + 0x2a0) = 0x13;
              return;
            }
            iVar3 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4);
            uVar4 = (**(code **)(iVar3 + 0x1d0))(param_2,iVar3);
          }
          if (uVar4 < 2) {
            (**(code **)(iVar3 + 0x1d4))(param_2,iVar3);
            FUN_0036be34(param_2,0x84);
            *(undefined2 *)(param_1 + 0x2a0) = 0x17;
            *(undefined1 *)(param_1 + 0x2f9) = 0;
            *(undefined4 *)(param_1 + 0x378) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0019142c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar3 + 0x1c0))(param_2,iVar3);
            return;
          }
          if (uVar4 == 2) {
            FUN_0037547c(uVar2,0,4,DAT_00191498,DAT_00191498,DAT_00191494);
            FUN_0036be34(param_2,0x86);
            *(undefined2 *)(param_1 + 0x2a0) = 0xe;
            return;
          }
          if (uVar4 == 4) {
            FUN_0037547c(uVar2,0,4,DAT_00191498,DAT_00191498,DAT_00191494);
            FUN_0036be34(param_2,0x85);
            *(undefined2 *)(param_1 + 0x2a0) = 0xe;
            return;
          }
        }
        else if (iVar3 == 1) goto LAB_0019128c;
      }
    }
  }
  return;
}
