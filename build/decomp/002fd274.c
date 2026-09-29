// OoT3D decomp @ 002fd274  name=FUN_002fd274  size=236

void FUN_002fd274(int param_1)

{
  if (*(char *)(param_1 + 0x1a) != '\0') {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4 + 0x1130) + 0x6c) =
         1;
    *(undefined1 *)
     (*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0xc) + 1) * 4 + 0x1130) + 0x6c) = 1;
    *(undefined1 *)
     (*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0xc) + 2) * 4 + 0x1130) + 0x6c) = 1;
    *(undefined1 *)
     (*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0xc) + 3) * 4 + 0x1130) + 0x6c) = 1;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x10) * 4 + 0x1130) + 0x6c)
         = 1;
    *(undefined1 *)
     (*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0x10) + 1) * 4 + 0x1130) + 0x6c) = 1;
    *(undefined1 *)
     (*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0x10) + 2) * 4 + 0x1130) + 0x6c) = 1;
  }
  return;
}
