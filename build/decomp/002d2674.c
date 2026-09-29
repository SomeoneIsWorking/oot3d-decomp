// OoT3D decomp @ 002d2674  name=FUN_002d2674  size=224

undefined4 FUN_002d2674(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;

  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 != 0 && param_3 != (int *)0x0) {
    iVar7 = 0;
    iVar4 = *(ushort *)(iVar6 + 4) - 1;
    if (-1 < iVar4) {
      do {
        iVar1 = (iVar7 + iVar4) / 2;
        puVar5 = (ushort *)(iVar6 + 0x10 + iVar1 * 8);
        if (param_2 < (int)(uint)*puVar5) {
          iVar4 = iVar1 + -1;
        }
        else {
          if (param_2 <= (int)(uint)*puVar5) {
            uVar2 = (uint)*(ushort *)(iVar6 + 0x10 + iVar1 * 8 + 2);
            if (uVar2 < *(ushort *)(iVar6 + 6)) {
              if (iVar6 == 0) {
                uVar3 = 0;
              }
              else {
                uVar3 = (int)(short)(ushort)*(byte *)(iVar6 + 0xd) *
                        (int)(short)(ushort)*(byte *)(iVar6 + 0xe) * (uint)*(byte *)(iVar6 + 0xc) >>
                        3;
              }
              iVar6 = uVar3 * uVar2 + iVar6 + 0x10 + (uint)*(ushort *)(iVar6 + 4) * 8;
            }
            else {
              iVar6 = 0;
            }
            *param_3 = iVar6;
            *(char *)(param_3 + 1) = (char)puVar5[2];
            *(undefined1 *)((int)param_3 + 5) = *(undefined1 *)((int)puVar5 + 5);
            *(undefined1 *)((int)param_3 + 6) = *(undefined1 *)((int)puVar5 + 7);
            *(undefined1 *)((int)param_3 + 7) = 0;
            return 1;
          }
          iVar7 = iVar1 + 1;
        }
      } while (iVar7 <= iVar4);
    }
  }
  return 0;
}
