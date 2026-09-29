// OoT3D decomp @ 0048abac  name=FUN_0048abac  size=180

int FUN_0048abac(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  if (param_1[4] < param_1[3]) {
    uVar2 = param_1[3] + 7;
    iVar5 = 0;
    iVar1 = (int)((uVar2 & 0xfffffff8) + ((uint)((int)uVar2 >> 0x1f) >> 0x1d)) >> 3;
    if (0 < iVar1) {
      do {
        uVar2 = (uint)*(byte *)((int)param_1 + iVar5 + 0x14);
        if (uVar2 != 0xff) {
          uVar3 = 1;
          iVar4 = 0;
          do {
            if ((uVar2 & uVar3) == 0) {
              *(byte *)((int)param_1 + iVar5 + 0x14) =
                   (byte)uVar3 | *(byte *)((int)param_1 + iVar5 + 0x14);
              param_1[4] = param_1[4] + 1;
              return param_1[2] * (iVar4 + iVar5 * 8) + *param_1;
            }
            iVar4 = iVar4 + 1;
            uVar3 = (uVar3 << 0x19) >> 0x18;
          } while (iVar4 < 8);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
  }
  return 0;
}
